#include <bits/stdc++.h>
#include "lex.yy.c"
using namespace std;
int yywrap()
{
    return 1;
}

enum type
{
    KEYWORDS,
    IDENTIFER,
    FLOATCON,
    FRACCON,
    CHARCONST,
    STRING,
    PUNCTUATORS,
    INTEGER
};

string symbolArray[] = {"KEYWORDS", "IDENTIFER", "FLOATCON", "FRACCON", "CHARCONST", "STRING", "PUNCTUATORS", "INTEGER"};


 struct node
{
    enum type t;
    string value;
    node *next;
};

#define symboltable node *

symboltable addtotable(symboltable T, string value, enum type t)
{
    symboltable temp = (symboltable)malloc(sizeof(node));
    temp->t = t;
    temp->value = value;
    temp->next = NULL;
    if (T == NULL)
    {
        T = temp;
    }
    else
    {
        symboltable p = T;
        while (p->next != NULL)
        {
            if (p->value == value && p->t == t)
            {
                return T;
            }
            p = p->next;
        }
        p->next = temp;
    }
    return T;
}

int main()
{
    int token;
    symboltable T = NULL;
    while ((token = yylex()))
    {
        switch (token)
        {
        case COM:
            cout<<"< Comment, "<<yytext<<">\n";
            break;
        case PUN:
            cout << "< Punctuation, " << yytext << ">\n";
            T = addtotable(T, yytext, PUNCTUATORS);
            break;
        case STR:
            cout << "< String, " << yytext << ">\n";
            T = addtotable(T, yytext, STRING);
            break;
        case CHAR:
            cout<<"< Character, "<<yytext<<">\n";
            T = addtotable(T, yytext, CHARCONST);
            break;
        case INT:
            cout<<"< Integer, "<<yytext<<">\n";
            T = addtotable(T, yytext, INTEGER);
            break;
        case FL:
            cout<<"< Float, "<<yytext<<">\n";
            T = addtotable(T, yytext, FLOATCON);
            break;
        case ID:
            cout<<"< Identifer, "<<yytext<<">\n";
            T = addtotable(T, yytext, IDENTIFER);
            break;
        case KW:
            cout << "< Keyword, " << yytext << ">";
            T = addtotable(T, yytext, KEYWORDS);
            break;
        default:
            cout << "Found a Token " << yytext << '\n';
            break;
        }
    }
    cout<<"\nSymbol Table\n";
    symboltable p = T;
    while(p){
        cout<<symbolArray[p->t]<<" : "<<p->value<<'\n';
        p = p->next;
    }
}