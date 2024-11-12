#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "lex.yy.c"

// Global Tables
symboltable *symtbl;
quad *tac_list;
reg *reg_desc;
targetquad *targ_list;
temp_table *head;
Pair *jlist;
targetquad *temp_tar_list;

// Global Variables
int instr_no = 0;
int tmp_val = 0;
int cur_block = 0;
int num_regs;
int symtblsize = 0;
int targ_instr_no = 0;
int ld_cnt = 0;


// add new symbol to target quadlist at the end
void add_target_temp(targetquad *newt)
{

    targetquad *ptr = temp_tar_list;
    if (ptr == NULL)
    {

        temp_tar_list = newt;
    }
    else
    {
        while (ptr->next != NULL)
        {

            ptr = ptr->next;
        }
        ptr->next = newt;
    }
}

// add new node to temp table at the end
void add_node(int val)
{
    temp_table *new_node = (temp_table *)malloc(sizeof(temp_table));
    new_node->val = val;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        temp_table *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}


// add new quad to quad list at the end
void add_quad(const char *op, const char *x, const char *y, const char *z)
{
    quad *newq = (quad *)malloc(sizeof(quad));
    newq->quad_no = ++instr_no;
    newq->bl_no = 0;
    newq->flag = 0;
    newq->oper = strdup(op);
    newq->x = strdup(x);
    newq->y = strdup(y);
    newq->z = strdup(z);

    if (tac_list == NULL)
    {
        tac_list = newq;
    }
    else
    {
        quad *ptr = tac_list;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newq;
    }
}

// add new quad to quad list at the end
void add_targ(const char *op, const char *x, const char *y, const char *z)
{
    targetquad *newq = (targetquad *)malloc(sizeof(targetquad));
    newq->targ_no = ++targ_instr_no;
    newq->bl_no = 0;
    newq->flag = 0;
    newq->oper = strdup(op);
    newq->x = strdup(x);
    newq->y = strdup(y);
    newq->z = strdup(z);
    if (strcmp(op, "LD") == 0 || strcmp(op, "LDI") == 0)
    {
        ld_cnt++;
    }
    if (targ_list == NULL)
    {
        targ_list = newq;
    }
    else
    {
        targetquad *ptr = targ_list;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newq;
    }
}

// add new quad to quad list at the end
void add_targ1(targetquad *newq)
{

    targetquad *ptr = targ_list;
    while (ptr != NULL)
    {
        if (strcmp(ptr->oper, newq->oper) == 0 &&
            strcmp(ptr->x, newq->x) == 0 &&
            strcmp(ptr->y, newq->y) == 0 &&
            strcmp(ptr->z, newq->z) == 0)
        {
            ptr->targ_no = ++targ_instr_no;
            return;
        }
        ptr = ptr->next;
    }

    newq->targ_no = ++targ_instr_no;

    newq->bl_no = 0;
    newq->flag = 0;

    if (strcmp(newq->oper, "LD") == 0 || strcmp(newq->oper, "LDI") == 0)
    {
        ld_cnt++;
    }

    if (targ_list == NULL)
    {
        targ_list = newq;
    }
    else
    {
        ptr = targ_list;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newq;
    }
}


// add new symbol to symbol table at the end
void add_sym(char *id)
{
    symboltable *newq = (symboltable *)malloc(sizeof(symboltable));
    newq->name = strdup(id);
    newq->reg_or_mem = 1;
    for (int i = 0; i < num_regs; i++)
    {
        newq->locs[i] = 0;
    }
    if (symtbl == NULL)
    {
        symtblsize++;
        symtbl = newq;
    }
    else
    {
        symboltable *ptr = symtbl;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            if (strcmp(ptr->name, id) == 0)
                return;
        }
        symtblsize++;
        ptr->next = newq;
    }
}

// backpatch
void backpatch(int x)
{

    quad *ptr = tac_list;
    while (ptr != NULL)
    {
        if (ptr->quad_no == x)
        {
            char *temp = (char *)malloc(100 * sizeof(char));
            sprintf(temp, "%d", instr_no + 1);
            ptr->z = strdup(temp);
            return;
        }
        ptr = ptr->next;
    }
}


// set leaders
void set_leader(int x)
{
    quad *ptr = tac_list;
    while (ptr != NULL)
    {
        if (ptr->next != NULL && ptr->quad_no == x)
        {
            ptr->flag = 1;
            return;
        }
        ptr = ptr->next;
    }
}

void set_leaders()
{
    quad *ptr = tac_list;
    ptr->flag = 1;
    while (ptr != NULL)
    {
        if (strcmp(ptr->oper, "goto") == 0 || ptr->oper[0] == 'i')
        {
            set_leader(atoi(ptr->z));
            set_leader(ptr->quad_no + 1);
        }
        ptr = ptr->next;
    }
}

// add size to each location
void put_size()
{
    symboltable *ptr = symtbl;
    while (ptr != NULL)
    {
        ptr->locs = (int *)calloc(num_regs, sizeof(int));
        ptr = ptr->next;
    }
}


// initialize register descriptor
void init_reg_desc()
{
    reg_desc = (reg *)malloc((num_regs) * sizeof(reg));
}

// add size to each register
void add_size()
{
    for (int i = 0; i < num_regs; i++)
    {
        reg_desc[i].vars = (int *)calloc(symtblsize, sizeof(int));
    }
}


// get symbol index
int get_sym_index(char *x)
{
    int i = 0;
    symboltable *ptr = symtbl;
    while (ptr != NULL)
    {
        if (strcmp(ptr->name, x) == 0)
        {
            return i;
        }
        i++;
        ptr = ptr->next;
    }
    return -1;
}


// remove memory location
void remove_mem(char *x)
{
    symboltable *ptr = symtbl;
    while (ptr != NULL)
    {
        if (strcmp(ptr->name, x) == 0)
        {
            ptr->reg_or_mem = 0; // not in memory now
        }
        ptr = ptr->next;
    }
}

// change to register
void change_to_reg(char *x, int reg_no)
{

    symboltable *ptr = symtbl;
    while (ptr != NULL)
    {
        if (strcmp(ptr->name, x) == 0)
        {
            ptr->locs[reg_no] = 1;
        }
        ptr = ptr->next;
    }
}

// change register status
void change_reg_status(int reg_no, int x)
{
    reg_desc[reg_no].vars[x] = 1;
}


// get symbol table
symboltable *get_symble(int ind)
{
    int i = 0;
    symboltable *ptr = symtbl;
    while (ptr != NULL)
    {
        if (i == ind)
        {
            return ptr;
        }
        i++;
        ptr = ptr->next;
    }
    return NULL;
}


// get Free Reg
int get_free_reg()
{
    int free_reg_no = -1;
    for (int i = 0; i < num_regs; i++)
    {
        int sum = 0;
        for (int j = 0; j < symtblsize; j++)
        {
            sum += reg_desc[i].vars[j];
            if (reg_desc[i].vars[j] == 1)
            {
                symboltable *aska = get_symble(j);
            }
        }

        if (sum == 0)
        {
            free_reg_no = i;
            break;
        }
    }
    return free_reg_no;
}

// remove all registers for symbol table
void remove_all_regs_for_sym(int symno)
{
    symboltable *cur = get_symble(symno);
    for (int i = 0; i < num_regs; i++)
    {
        cur->locs[i] = 0;
    }
    cur->reg_or_mem = 1;
}

// are all in memory
int all_in_mem(int reg_no)
{
    for (int i = 0; i < symtblsize; i++)
    {
        if (reg_desc[reg_no].vars[i] == 1)
        {
            symboltable *ptr = get_symble(i);
            if (ptr->reg_or_mem == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

// are all temps
int all_temps(int reg_no)
{
    for (int i = 0; i < symtblsize; i++)
    {
        if (reg_desc[reg_no].vars[i] == 1)
        {
            symboltable *ptr = get_symble(i);
            if (ptr->name[0] != '$')
            {
                return 0;
            }
        }
    }
    return 1;
}

// check for no register
int check_for_noreg(symboltable *x)
{
    int tot = 0;
    for (int i = 0; i < num_regs; i++)
    {
        tot += x->locs[i];
    }
    if (tot == 0)
        return 1;
    return 0;
}

// clear register
void clear_reg(int reg_no)
{
    for (int i = 0; i < symtblsize; i++)
    {
        if (reg_desc[reg_no].vars[i] == 1)
        {
            symboltable *ptr = get_symble(i);
            ptr->locs[reg_no] = 0;
            if (check_for_noreg(ptr))
                ptr->reg_or_mem = 1;
            reg_desc[reg_no].vars[i] = 0;
        }
    }
}

void clear_reg1(int reg_no)
{
    for (int i = 0; i < symtblsize; i++)
    {
        if (reg_desc[reg_no].vars[i] == 1)
        {
            symboltable *ptr = get_symble(i);
            ptr->locs[reg_no] = 0;
            ptr->reg_or_mem = 1;
            reg_desc[reg_no].vars[i] = 0;
        }
    }
}

// no use in block
int no_use_in_block(int reg_no, int blo_no, int q_no)
{
    quad *ptr = tac_list;
    while (ptr != NULL && ptr->bl_no <= blo_no)
    {
        if (ptr->quad_no > q_no && ptr->bl_no == blo_no)
        {
            char *x = strdup(ptr->x);
            char *y = strdup(ptr->y);
            char *z = strdup(ptr->z);
            int xpos = get_sym_index(x);
            int ypos = get_sym_index(y);
            int zpos = get_sym_index(z);
            if (xpos != -1 && reg_desc[reg_no].vars[xpos] == 1)
            {
                return 0;
            }
            if (ypos != -1 && reg_desc[reg_no].vars[ypos] == 1)
            {
                return 0;
            }
            if (zpos != -1 && reg_desc[reg_no].vars[zpos] == 1)
            {
                return 0;
            }
        }
    }
    return 1;
}

// get register with minimum score
int get_reg_min()
{
    int ind_min = -1;
    int min_score = 1e5;
    for (int i = 0; i < num_regs; i++)
    {
        int sum = 0;
        for (int j = 0; j < symtblsize; j++)
        {
            sum += reg_desc[i].vars[j];
        }
        if (sum < min_score)
        {
            min_score = sum;
            ind_min = i;
        }
    }
    return ind_min;
}

// get register
int get_reg(char *x, int blo_no, int q_no)
{

    reg ret_reg;
    int regx = -1;
    int posx = get_sym_index(x);

    for (int i = 0; i < num_regs; i++)
    {
        if (reg_desc[i].vars[posx] == 1)
        {
            regx = i;
            break;
        }
    }
    if (strcmp(x, "") != 0 && regx == -1)
    {
        int r1 = get_free_reg();
        if (r1 != -1)
        {
            change_reg_status(r1, posx);
            regx = r1;
        }
    }
    if (regx == -1)
    {
        for (int i = 0; i < num_regs; i++)
        {
            if (all_in_mem(i))
            {
                clear_reg(i);
                change_reg_status(i, posx);
                regx = i;
            }
        }
    }
    if (regx == -1)
    {
        for (int i = 0; i < num_regs; i++)
        {
            if (all_temps(i))
            {
                if (no_use_in_block(i, blo_no, q_no))
                {
                    clear_reg(i);
                    change_reg_status(i, posx);
                    regx = i;
                }
            }
        }
    }
    if (regx == -1)
    {
        int min_reg = get_reg_min();
        clear_reg1(min_reg);
        regx = min_reg;
        change_reg_status(min_reg, posx);
    }
    change_to_reg(x, regx);

    return regx;
}


// get target number
int get_tno(int num)
{
    for (int i = 0; i <= cur_block; i++)
    {
        if (jlist[i].qno == num)
        {
            return jlist[i].tno;
        }
    }
    return 1;
}


// quad encoding
void quad_encoding(quad *tac)
{

    char *x = strdup(tac->x);
    char *y = strdup(tac->y);
    char *z = strdup(tac->z);
    int xpos = get_sym_index(x);
    int ypos = get_sym_index(y);
    int zpos = get_sym_index(z);
    char *oper = strdup(tac->oper);
    int blo_no = tac->bl_no;
    int q_no = tac->quad_no;
    if (strcmp(oper, "=") == 0)
    {
        if (get_sym_index(x) == -1)
        {
            int rz = get_reg(z, blo_no, q_no);
            remove_all_regs_for_sym(zpos);
            change_reg_status(rz, zpos);
            change_to_reg(z, rz);
            char *tem = (char *)malloc(100 * sizeof(char));
            sprintf(tem, "R%d", rz + 1);
            add_targ("LDI", tem, "", x);
            add_node(zpos);
        }
        else
        {
            int rx = get_reg(x, blo_no, q_no);
            remove_all_regs_for_sym(zpos);
            change_reg_status(rx, zpos);
            change_to_reg(z, rx);
            symboltable *zsym = get_symble(zpos);
            add_node(zpos);
            zsym->reg_or_mem = 0;
        }
    }
    else if (strcmp(oper, "goto") == 0)
    {
        add_targ("JMP", "", "", tac->z);
    }
    else if (oper[0] == 'i')
    {

        int rx = -1;
        char *rex = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(x) != -1)
        {
            rx = get_reg(x, blo_no, q_no);
            sprintf(rex, "R%d", rx + 1);
            if (x[0] != '$')
                add_targ("LD", rex, "", x);
        }
        else
            sprintf(rex, "%s", x);

        int ry = -1;
        char *rey = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(y) != -1)
        {
            ry = get_reg(y, blo_no, q_no);
            sprintf(rey, "R%d", ry + 1);
            if (y[0] != '$')
                add_targ("LD", rey, "", y);
        }
        else
            sprintf(rey, "%s", y);
        if (strcmp(oper, "i==") == 0)
            add_targ("JNE", rex, rey, tac->z);
        if (strcmp(oper, "i!=") == 0)
            add_targ("JEQ", rex, rey, tac->z);
        if (strcmp(oper, "i<") == 0)
            add_targ("JGE", rex, rey, tac->z);
        if (strcmp(oper, "i>") == 0)
            add_targ("JLE", rex, rey, tac->z);
        if (strcmp(oper, "i<=") == 0)
            add_targ("JGT", rex, rey, tac->z);
        if (strcmp(oper, "i>=") == 0)
            add_targ("JLT", rex, rey, tac->z);
    }
    else
    {
        int rx = -1;
        char *rex = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(x) != -1)
        {
            rx = get_reg(x, blo_no, q_no);
            sprintf(rex, "R%d", rx + 1);
            if (x[0] != '$')
                add_targ("LD", rex, "", x);
        }
        else
            sprintf(rex, "%s", x);

        int ry = -1;
        char *rey = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(y) != -1)
        {
            ry = get_reg(y, blo_no, q_no);
            sprintf(rey, "R%d", ry + 1);
            if (y[0] != '$')
                add_targ("LD", rey, "", y);
        }
        else
            sprintf(rey, "%s", y);

        int rz;
        char *rez = (char *)malloc(100 * sizeof(char));
        if (strcmp(z, x) == 0)
        {

            rz = rx;
        }
        else if (strcmp(z, y) == 0)
        {

            rz = ry;
        }
        else
        {

            rz = get_reg(z, blo_no, q_no);
        }
        remove_all_regs_for_sym(zpos);
        change_reg_status(rz, zpos);
        change_to_reg(z, rz);
        sprintf(rez, "R%d", rz + 1);
        if (strcmp(oper, "+") == 0)
            add_targ("ADD", rex, rey, rez);
        if (strcmp(oper, "*") == 0)
            add_targ("MUL", rex, rey, rez);
        if (strcmp(oper, "/") == 0)
            add_targ("DIV", rex, rey, rez);
        if (strcmp(oper, "%") == 0)
            add_targ("REM", rex, rey, rez);
        if (strcmp(oper, "-") == 0)
            add_targ("SUB", rex, rey, rez);
        add_node(get_sym_index(z));
    }
}

// initialize target quad
targetquad *init_targ(const char *oper,const char *x,const char *y,const char *z)
{
    targetquad *newt = (targetquad *)malloc(sizeof(targetquad));
    newt->oper = strdup(oper);
    newt->x = strdup(x);
    newt->y = strdup(y);
    newt->z = strdup(z);
    return newt;
}


// initialize temp target
void init_temp_targ(quad *tac)
{
    targetquad *ret_targ;
    char *x = strdup(tac->x);
    char *y = strdup(tac->y);
    char *z = strdup(tac->z);
    int xpos = get_sym_index(x);
    int ypos = get_sym_index(y);
    int zpos = get_sym_index(z);
    char *oper = strdup(tac->oper);
    int blo_no = tac->bl_no;
    int q_no = tac->quad_no;

    if (strcmp(oper, "=") == 0)
    {
        if (get_sym_index(x) == -1)
        {
            int rz = get_reg(z, blo_no, q_no);
            remove_all_regs_for_sym(zpos);
            change_reg_status(rz, zpos);
            change_to_reg(z, rz);
            char *tem = (char *)malloc(100 * sizeof(char));
            sprintf(tem, "R%d", rz + 1);
            ret_targ = init_targ("LDI", tem, "", x);
            add_target_temp(ret_targ);
            add_node(zpos);
        }
        else
        {
            int rx = get_reg(x, blo_no, q_no);
            remove_all_regs_for_sym(zpos);
            change_reg_status(rx, zpos);
            change_to_reg(z, rx);
            symboltable *zsym = get_symble(zpos);
            add_node(zpos);
            zsym->reg_or_mem = 0;
        }
    }
    else if (strcmp(oper, "goto") == 0)
    {
        ret_targ = init_targ("JMP", "", "", tac->z);
        add_target_temp(ret_targ);
    }
    else if (oper[0] == 'i')
    {

        int rx = -1;
        char *rex = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(x) != -1)
        {
            rx = get_reg(x, blo_no, q_no);
            sprintf(rex, "R%d", rx + 1);
            if (x[0] != '$')
            {
                ret_targ = init_targ("LD", rex, "", x);
                add_target_temp(ret_targ);
            }
        }
        else
            sprintf(rex, "%s", x);
        int ry = -1;
        char *rey = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(y) != -1)
        {
            ry = get_reg(y, blo_no, q_no);
            sprintf(rey, "R%d", ry + 1);
            if (y[0] != '$')
            {
                ret_targ = init_targ("LD", rey, "", y);
                add_target_temp(ret_targ);
            }
        }
        else
            sprintf(rey, "%s", y);

        if (strcmp(oper, "i==") == 0)
        {
            ret_targ = init_targ("JNE", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "i!=") == 0)
        {
            ret_targ = init_targ("JEQ", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "i<") == 0)
        {
            ret_targ = init_targ("JGE", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "i>") == 0)
        {
            ret_targ = init_targ("JLE", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "i<=") == 0)
        {
            ret_targ = init_targ("JGT", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "i>=") == 0)
        {
            ret_targ = init_targ("JLT", rex, rey, tac->z);
            add_target_temp(ret_targ);
        }
    }
    else
    {
        int rx = -1;
        char *rex = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(x) != -1)
        {
            rx = get_reg(x, blo_no, q_no);
            sprintf(rex, "R%d", rx + 1);
            if (x[0] != '$')
            {
                ret_targ = init_targ("LD", rex, "", x);
                add_target_temp(ret_targ);
            }
        }
        else
            sprintf(rex, "%s", x);

        int ry = -1;
        char *rey = (char *)malloc(100 * sizeof(char));
        if (get_sym_index(y) != -1)
        {
            ry = get_reg(y, blo_no, q_no);
            sprintf(rey, "R%d", ry + 1);
            if (y[0] != '$')
            {
                ret_targ = init_targ("LD", rey, "", y);
                add_target_temp(ret_targ);
            }
        }
        else
            sprintf(rey, "%s", y);

        int rz;
        char *rez = (char *)malloc(100 * sizeof(char));
        if (strcmp(z, x) == 0)
        {

            rz = rx;
        }
        else if (strcmp(z, y) == 0)
        {

            rz = ry;
        }
        else
        {

            rz = get_reg(z, blo_no, q_no);
        }
        remove_all_regs_for_sym(zpos);
        change_reg_status(rz, zpos);
        change_to_reg(z, rz);
        sprintf(rez, "R%d", rz + 1);
        if (strcmp(oper, "+") == 0)
        {
            ret_targ = init_targ("ADD", rex, rey, rez);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "*") == 0)
        {
            ret_targ = init_targ("MUL", rex, rey, rez);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "/") == 0)
        {
            ret_targ = init_targ("DIV", rex, rey, rez);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "%") == 0)
        {
            ret_targ = init_targ("REM", rex, rey, rez);
            add_target_temp(ret_targ);
        }
        if (strcmp(oper, "-") == 0)
        {
            ret_targ = init_targ("SUB", rex, rey, rez);
            add_target_temp(ret_targ);
        }
        add_node(get_sym_index(z));
    }
}


// fill jumps
void filljumps()
{
    targetquad *ptr = targ_list;
    while (ptr != NULL)
    {
        if (ptr->oper[0] == 'J')
        {
            int req = atoi(ptr->z);
            int rep = get_tno(req);
            char *repl = (char *)malloc(100 * sizeof(char));
            sprintf(repl, "%d", rep);
            ptr->z = strdup(repl);
        }
        ptr = ptr->next;
    }
}

// is leader
int isleader(int num)
{
    for (int i = 0; i < cur_block; i++)
    {
        if (jlist[i].tno == num)
        {
            return 1;
        }
    }
    return 0;
}

int instruction()
{
    return instr_no;
}

int temp()
{
    return ++tmp_val;
}



int main(int argc, char *argv[])
{
    yyparse();
    num_regs = atoi(argv[1]);
    quad *ptr = tac_list;
    add_quad("", "", "", "");
    set_leaders();
    int jcnt = 0;

    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\nIntermediate code:\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }

    while (ptr != NULL)
    {
        if (ptr->flag == 1)
        {
            ptr->bl_no = ++cur_block;
            printf("\nBlock %d:\n", cur_block);
        }
        else
        {
            ptr->bl_no = cur_block;
        }
        if (ptr->oper[0] == 'i')
        {
            char *opera = (char *)malloc(4 * sizeof(char));
            for (int i = 1; i < strlen(ptr->oper); i++)
            {
                opera[i - 1] = ptr->oper[i];
            }
            printf("\t%d:\tiffalse (%s %s %s) goto %s\n", ptr->quad_no, ptr->x, opera, ptr->y, ptr->z);
            jcnt++;
        }
        else if (strcmp(ptr->oper, "=") == 0)
        {
            printf("\t%d:\t%s %s %s\n", ptr->quad_no, ptr->z, ptr->oper, ptr->x);
        }
        else if (strcmp(ptr->oper, "goto") == 0)
        {
            printf("\t%d:\t%s %s\n", ptr->quad_no, ptr->oper, ptr->z);
            jcnt++;
        }
        else if (strcmp(ptr->oper, "") == 0)
        {
            printf("\t%d: \n", ptr->quad_no);
        }
        else
        {
            printf("\t%d:\t%s = %s %s %s\n", ptr->quad_no, ptr->z, ptr->x, ptr->oper, ptr->y);
        }
        ptr = ptr->next;
    }
    put_size();
    init_reg_desc();
    add_size();
    jlist = (Pair *)malloc((cur_block + 1) * sizeof(Pair));
    ptr = tac_list;
    int k = 0;

    while (ptr != NULL)
    {
        if (ptr->flag == 1)
        {
            jlist[k++].qno = ptr->quad_no;
        }
        ptr = ptr->next;
    }
    quad *tem = tac_list;
    k = 0;
    while (tem->next != NULL)
    {
        if (tem->flag == 1)
        {
            jlist[k++].tno = targ_instr_no + 1;
        }
        if (tem->oper[0] == 'i' || tem->oper[0] == 'g')
            init_temp_targ(tem);
        else
        {
            quad_encoding(tem);
        }

        if (tem->next->next == NULL || (tem->next != NULL && (tem->bl_no != tem->next->bl_no)))
        {

            temp_table *ptr = head;
            while (ptr != NULL)
            {
                symboltable *symb_n = get_symble(ptr->val);
                int symb_npos = get_sym_index(symb_n->name);

                if (symb_n->name[0] != '$')
                {
                    int r_no = -1;
                    for (int i = 0; i < num_regs; i++)
                    {
                        if (symb_n->locs[i] == 1)
                        {
                            r_no = i;
                            break;
                        }
                    }
                    char *reg_sym = (char *)malloc(100 * sizeof(char));
                    sprintf(reg_sym, "R%d", r_no + 1);
                    add_targ("ST", reg_sym, "", symb_n->name);
                }
                remove_all_regs_for_sym(symb_npos);
                ptr = ptr->next;
            }

            for (int i = 0; i < num_regs; i++)
            {
                clear_reg(i);
            }
            temp_table *qtr = head;
            while (qtr != NULL)
            {
                temp_table *temp = qtr;
                qtr = qtr->next;
                free(temp);
            }
            head = NULL;
        }
        if (tem->oper[0] == 'i' || tem->oper[0] == 'g')
        {

            targetquad *ptr1 = temp_tar_list;
            while (ptr1 != NULL)
            {

                add_targ1(ptr1);
                ptr1 = ptr1->next;
            }
            temp_tar_list = NULL;
        }
        tem = tem->next;
    }
    add_targ("", "", "", "");
    jlist[cur_block].qno = instr_no;
    jlist[cur_block].tno = targ_instr_no;
    filljumps();
    targetquad *potr = targ_list;
    int bno = 0;

    printf("\n\n\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\nTarget code:\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }

    while (potr != NULL)
    {
        if (isleader(potr->targ_no))
        {
            printf("\nBlock %d:\n", ++bno);
        }
        if (potr->oper[0] == 'J')
        {
            printf("\t%d:\t%s %s %s %s\n", potr->targ_no, potr->oper, potr->x, potr->y, potr->z);
        }
        else if (potr->oper[0] == 'L')
        {
            printf("\t%d:\t%s %s %s\n", potr->targ_no, potr->oper, potr->x, potr->z);
        }
        else if (strcmp(potr->oper, "ST") == 0)
        {
            printf("\t%d:\t%s %s %s\n", potr->targ_no, potr->oper, potr->z, potr->x);
        }
        else
        {
            printf("\t%d:\t%s %s %s %s\n", potr->targ_no, potr->oper, potr->z, potr->x, potr->y);
        }
        potr = potr->next;
    }

    return 0;
}
