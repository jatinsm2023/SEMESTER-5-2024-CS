#include <bits/stdc++.h>
#include "lex.yy.c"
using namespace std;

const int MAX = 210;
int yywrap()
{
    return 1;
}

struct Id
{
    string name;
    int value;
};

struct In
{
    string token;
    int tokenid;
};

// Input Table
In Input[MAX];
int insize;

Id IdTable[MAX];
int idsize;

int NumTable[MAX];
int numsize;


void addIDtable(string s)
{
    for (int i = 0; i < idsize; i++)
    {
        if (IdTable[i].name == s)
        {
            return;
        }
    }
    IdTable[idsize++].name = s;
}

void addNumtable(int s)
{
    NumTable[numsize++] = s;
}

void printIdtable()
{
    for (int i = 0; i < idsize; i++)
    {
        cout << IdTable[i].name << " ";
    }
    cout << '\n';
    for (int i = 0; i < idsize; i++)
    {
        cout << IdTable[i].value << " ";
    }
    cout << '\n';
}


void printNumtable()
{
    for (int i = 0; i < numsize; i++)
    {
        cout << NumTable[i] << " ";
    }
    cout << '\n';
}

// Function to find Index of a ID to store in Tree Leaf
int idindex(string s)
{
    for (int i = 0; i < idsize; i++)
    {
        if (IdTable[i].name == s)
        {
            return i;
        }
    }
    return -1;
}

// Function to find Index of a Number to store in Tree Leaf
int numindex(int s)
{
    for (int i = 0; i < numsize; i++)
    {
        if (NumTable[i] == s)
        {
            return i;
        }
    }
    return -1;
}


// Part 3: Tree for Parsing
class Tree
{
public:
    string opr;
    int val;
    Tree *left;
    Tree *right;
    int depth;

    Tree(string opr, int depth, int val = 0)
    {
        this->opr = opr;
        this->val = val;
        this->depth = depth;
        this->left = NULL;
        this->right = NULL;
    }

    ~Tree()
    {
        this->left = NULL;
        this->right = NULL;
    }

    Tree *MakeTree(int l, int r, int depth)
    {
        if (l > r)
            return NULL;
        if (l == r)
        {
            Tree *root;
            string temp = Input[l].token;
            if ((temp[0] >= '0' && temp[0] <= '9') || temp[0] == '-')
            {
                root = new Tree("NUM", depth, numindex(stoll(temp)));
            }
            else
            {
                root = new Tree("ID", depth, idindex((temp)));
            }
            return root;
        }
        if (Input[l].token == "(" && Input[r].token == ")")
        {
            Tree *root = new Tree(Input[l + 1].token, depth);
            int mid;
            int par = 0;
            for (int i = l + 2; i < r; i++)
            {
                if (Input[i].token == "(")
                    par++;
                else if (Input[i].token == ")")
                    par--;
                if (par == 0)
                {
                    mid = i;
                    break;
                }
            }
            root->left = root->MakeTree(l + 2, mid, depth + 1);
            root->right = root->MakeTree(mid + 1, r - 1, depth + 1);

            return root;
        }
        return NULL;
    }
};

int Eval(Tree *root)
{
    if (root->right == NULL && root->right == NULL)
    {
        if (root->opr == "ID")
        {
            return IdTable[root->val].value;
        }
        else
        {
            return NumTable[root->val];
        }
    }
    if (root == NULL)
        return 0;
    int left = Eval(root->left);
    int right = Eval(root->right);
    int ans;
    if (root->opr == "*")
    {
        ans = left * right;
    }
    if (root->opr == "/")
    {
        ans = left / right;
    }
    if (root->opr == "+")
    {
        ans = left + right;
    }
    if (root->opr == "-")
    {
        ans = left - right;
    }
    if (root->opr == "%")
    {
        ans = left % right;
    }
    return ans;
}

void printTree(Tree *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        if (root->opr == "ID")
        {
            for (int i = 1; i < root->depth; i++)
            {
                cout << "\t";
            }
            cout << "----->";
            cout << "ID(" << IdTable[root->val].name << ")\n";
        }
        else
        {
            for (int i = 1; i < root->depth; i++)
            {
                cout << "\t";
            }
            cout << "----->";
            cout << "NUM(" << NumTable[root->val] << ")\n";
        }
        return;
    }
    for (int i = 1; i < root->depth; i++)
    {
        cout << "\t";
    }
    if (root->depth != 0)
        cout << "----->";
    cout << "OP(" << root->opr << ")\n";
    printTree(root->left);
    printTree(root->right);
}

void deleteTree(Tree *root)
{
    if (root == NULL)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}


// Part 1: Lexical Analysis
void Lexical_Analysis()
{
    int token;
    idsize = 0;
    numsize = 0;
    insize = 0;
    int iditer = 0;
    int cp = 0, op = 0;
    while ((token = yylex()))
    {
        if (op < cp)
        {
            cout << "**ERROR Expected (\n";
            exit(-1);
        }
        switch (token)
        {
        case OR:
            Input[insize].tokenid = 3;
            Input[insize++].token = "(";
            op++;
            break;
        case CR:
            Input[insize].tokenid = 4;
            Input[insize++].token = ")";
            cp++;
            break;
        case NUM:
            if (op != cp)
            {
                addNumtable(stoll(string(yytext)));
                Input[insize].tokenid = 6;
                Input[insize++].token = string(yytext);
            }
            if (op == cp)
            {
                IdTable[iditer++].value = stoll(string(yytext));
            }
            break;
        case ID:
            addIDtable(string(yytext));
            Input[insize].tokenid = 5;
            Input[insize++].token = string(yytext);
            break;
        case OP:
            if (string(yytext) == "+")
            {
                Input[insize].tokenid = 7;
            }
            if (string(yytext) == "-")
            {
                Input[insize].tokenid = 8;
            }
            if (string(yytext) == "*")
            {
                Input[insize].tokenid = 9;
            }
            if (string(yytext) == "/")
            {
                Input[insize].tokenid = 10;
            }
            if (string(yytext) == "%")
            {
                Input[insize].tokenid = 11;
            }
            Input[insize++].token = string(yytext);
            break;
        case NR:
            cerr << "***ERROR: Invalid token " << yytext << endl;
            exit(-1);
            return ;
        default:
            break;
        }
    }
}

// Part 2: Table for Parsing 
// Part 3: checking the Input to be from grammer or not
int Parsing()
{

    // Table
    string M[3][12];

    M[0][3] = "31224"; // EXPR -> ( OP ARG ARG )
    M[2][3] = "0";     // ARG -> EXPR
    M[2][5] = "5";     // ARG -> ID
    M[2][6] = "6";     // ARG -> NUM
    M[1][7] = "7";     // OP -> +
    M[1][8] = "8";     // OP -> -
    M[1][9] = "9";     // OP -> *
    M[1][10] = "10";   // OP -> /
    M[1][11] = "11";   // OP -> %

    stack<int> s;
    int iter = 0;

    s.push(0);

    while (!s.empty())
    {
        int a = s.top();
        s.pop();

        if (a >= 3 && a <= 11)
        {
            if (iter < insize && a == Input[iter].tokenid)
            {
                iter++;
            }
            else
            {
                cerr << "***ERROR: Right parenthesis expected in place of " << (iter < insize ? Input[iter].token : "N/A") << '\n';
                exit(-1);
                return 0;
            }
        }
        else
        {
            if (a == 0)
            {
                if (iter < insize && Input[iter].tokenid == 3)
                {
                    string temp = M[a][Input[iter].tokenid];
                    for (int i = temp.size() - 1; i >= 0; i--)
                    {
                        s.push(temp[i] - '0');
                    }
                }
                else
                {
                    cerr << "***ERROR: Left parenthesis expected in place of " << Input[iter].token << '\n';
                    exit(-1);
                    return 0;
                }
            }
            else if (a == 1)
            {
                if (iter < insize && (Input[iter].tokenid >= 7 && Input[iter].tokenid <= 11))
                {
                    s.push(Input[iter].tokenid);
                }
                else
                {
                    cerr << "***ERROR: Operator expected in place of " << Input[iter].token << '\n';
                    exit(-1);
                    return 0;
                }
            }
            else if (a == 2)
            {
                if (iter < insize)
                {
                    if (Input[iter].tokenid == 3)
                    {
                        string temp = M[a][Input[iter].tokenid];
                        for (int i = temp.size() - 1; i >= 0; i--)
                        {
                            s.push(temp[i] - '0');
                        }
                    }
                    else if (Input[iter].tokenid == 5)
                    {
                        string temp = M[a][Input[iter].tokenid];
                        for (int i = temp.size() - 1; i >= 0; i--)
                        {
                            s.push(temp[i] - '0');
                        }
                    }
                    else if (Input[iter].tokenid == 6)
                    {
                        string temp = M[a][Input[iter].tokenid];
                        for (int i = temp.size() - 1; i >= 0; i--)
                        {
                            s.push(temp[i] - '0');
                        }
                    }
                    else
                    {
                        cerr << "***ERROR: ID/NUM/LP expected in place of " << Input[iter].token << '\n';
                        exit(-1);
                        return 0;
                    }
                }
                else
                {
                    cerr << "***ERROR: Unexpected end of input\n";
                    exit(-1);
                    return 0;
                }
            }
        }
    }

    if (iter != insize)
    {
        cerr << "***ERROR: Input not fully consumed\n";
        exit(-1);
        return 0;
    }
    return 1;
}

int main()
{
    Lexical_Analysis();

    Tree *root = NULL;
    if (Parsing() == 1)
    {
        root = root->MakeTree(0, insize - 1, 0);
        cout << "Parsing is Successful\n\n";
        printTree(root);
        if (idsize != 0)
        {
            cout << "\nReading variable values fron the input\n";
            for (int i = 0; i < idsize; i++)
            {
                cout << IdTable[i].name << ": " << IdTable[i].value << '\n';
            }
        }
        cout << "\nThe value of the expression is ";
        cout << Eval(root) << '\n';
        deleteTree(root);
    }
}