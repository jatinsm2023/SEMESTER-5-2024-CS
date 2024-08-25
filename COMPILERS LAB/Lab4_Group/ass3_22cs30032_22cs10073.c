#include <stdio.h>
#include "lex.yy.c"

int yywrap()
{
    return 1;
}

enum type
{
    keywords,
    identifer,
    integer_constant,
    floating_constant,
    character_constant,
    string_literal,
    punctuators,
    single_line_comment,
    multi_line_comment,
};

char* symbolArray[] = {
    "KEYWORDS",
    "IDENTIFER",
    "INTEGER_CONSTANT",
    "FLOATING_CONSTANT",
    "CHARACTER_CONSTANT",
    "STRING_LITERAL",
    "PUNCTUATORS",
    "SINGLE_LINE_COMMENT",
    "MULTI_LINE_COMMENT",
};

struct node
{
    enum type t;
    char* value;
    struct node *next;
};

typedef struct node *symboltable;

symboltable addtotable(symboltable T, char* value, enum type t)
{
    symboltable p = T;
    if (T == NULL)
    {
        p = (symboltable)malloc(sizeof(struct node));
        p->value = (char *)malloc((strlen(value) + 1) * sizeof(char));
        strcpy(p->value, value);
        p->t = t;
        p->next = NULL;
        T = p;
        return T;
    }
    while (p)
    {
        if (!strcmp(p->value, value) && p->t == t)
        {
            return T;
        }
        if (!p->next)
        {
            symboltable newn;
            newn = (symboltable)malloc(sizeof(struct node));
            newn->value = (char *)malloc((strlen(value) + 1) * sizeof(char));
            strcpy(newn->value, value);
            newn->t = t;
            p->next = newn;
            return T;
        }
        p = p->next;
    }
    return p;
   
}

int main()
{
    int token;
    symboltable T = NULL;
    while ((token = yylex()))
    {
        switch (token)
        {
            case KEYWORD:
                printf("<Keyword, %s >\n", yytext);
                T = addtotable(T, yytext, keywords);
                break;
            case IDENTIFIER:
                printf("<Identifer, %s >\n", yytext);
                T = addtotable(T, yytext, identifer);
                break;
            case INTEGER_CONSTANT:
                printf("<Integer Constant, %s >\n", yytext);
                T = addtotable(T, yytext, integer_constant);
                break;
            case FLOATING_CONSTANT:
                printf("<Floating Constant, %s >\n", yytext);
                T = addtotable(T, yytext, floating_constant);
                break;
            case CHARACTER_CONSTANT:
                printf("<Character Constant, %s >\n", yytext);
                T = addtotable(T, yytext, character_constant);
                break;
            case STRING_LITERAL:
                printf("<String Literal, %s >\n", yytext);
                T = addtotable(T, yytext, string_literal);
                break;
            case PUNCTUATOR:
                printf("<Punctuator, %s >\n", yytext);
                T = addtotable(T, yytext, punctuators);
                break;
            case SINGLE_LINE_COMMENT:
                printf("<Single Line Comment, %s >\n", yytext);
                T = addtotable(T, yytext, single_line_comment);
                break;
            case MULTI_LINE_COMMENT:
                printf("<Multi Line Comment, %s >\n", yytext);
                T = addtotable(T, yytext, multi_line_comment);
                break;
            default:
                printf("Invalid Token\n");
                break;
        }
    }

    printf("\n\n\n --- Symbol Table --- \n\n\n");

    symboltable p = T;
    while(p){
        printf("%s : %s\n", symbolArray[p->t], p->value);
        p = p->next;
    }


    printf("\n\n\n --- End of Symbol Table --- \n\n\n");
    return 0;
}