#include <bits/stdc++.h>
#include "lex.yy.c"
using namespace std;

int yywrap(){
    return 1;
}
struct ListId
{
    string id;
    struct ListId *next;

    struct ListId *addID(struct ListId *T, string s)
    {
        ListId *p;
        p = T;
        while (p)
        {
            if (s == p->id)
            {
                return T;
            }
            p = p->next;
        }

        p = (ListId *)malloc(sizeof(ListId));
        p->id = s;
        p->next = T;
        return p;
    }
};

struct ListNum
{
    int num;
    struct ListNum *next;

    struct ListNum *addNum(struct ListNum *T, int s)
    {
        ListNum *p;
        p = T;
        while (p)
        {
            if (s == p->num)
            {
                return T;
            }
            p = p->next;
        }

        p = (ListNum *)malloc(sizeof(ListNum));
        p->num = s;
        p->next = T;
        return p;
    }
};

int main()
{
    int token;
    ListId *IdTable = NULL;
    ListNum *NumTable = NULL;
    int cp = 0,op = 0;
    while ((token = yylex()))
    {   
        if(op<cp) break;
        
        switch (token)
        {
        case OR:
            cout << "Open Braket\n";
            op++;
            break;
        case CR:
            cout << "Close Braket\n";
            cp++;
            break;
        case NUM:
            NumTable = NumTable->addNum(NumTable,stoll(string(yytext)));
            break;
        case ID:
            IdTable = IdTable->addID(IdTable,string(yytext));
            break;
        case OP:
            cout<<"Operator:- "<<yytext<<'\n';
            break;
        default:
            break;
        }
    }

    ListId *p;
    p = IdTable;

    while(p){
        cout<<p->id<<" ";
        p=p->next;
    }
    cout<<'\n';
    ListNum *q;
    q = NumTable;
    while(q){
        cout<<q->num<<" ";
        q = q->next;
    }
}