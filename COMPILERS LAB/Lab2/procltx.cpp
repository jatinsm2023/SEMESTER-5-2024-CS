#include <bits/stdc++.h>
#include "lex.yy.c"
using namespace std;

// class Command {
//    public:

//    Command(string st){
//       s = st;
//    }
// };

// class Environment {
//    public:
//       string s;
//    Environment(string st){
//       s = st;
//    }
// };

struct ListCom
{
   string s;
   int count;
   struct ListCom *next;
};
struct ListEnv
{
   string s;
   int count;
   struct ListEnv *next;
};

int yywrap()
{
   return 1;
}

ListCom *addinCOM(ListCom *T, string st)
{

   ListCom *p;
   p = T;
   while (p)
   {
      if (st == p->s)
      {
         p->count++;
         return T;
      }
      p = p->next;
   }

   p = (ListCom *)malloc(sizeof(ListCom));
   p->s = st;
   p->count = 1;
   p->next = T;
   return p;
}

ListEnv *addinEnv(ListEnv *Env, string st)
{
   st = st.substr(7);
   st = st.substr(0, st.length() - 1);

   ListEnv *p;
   p = Env;
   while (p)
   {
      if (st == p->s)
      {
         p->count++;
         return Env;
      }
      p = p->next;
   }

   p = (ListEnv *)malloc(sizeof(ListEnv));
   p->s = st;
   p->count = 1;
   p->next = Env;
   return p;
}

int main()
{
   int token;
   int maths = 0;
   int dismaths = 0;
   int commands = 0;
   int envs = 0;
   ListCom *T = NULL;
   ListEnv *Env = NULL;
   while ((token = yylex()))
   {
      switch (token)
      {
      case CMD:
         T = addinCOM(T, string(yytext));
         break;
      case ENVBEGIN:
         Env = addinEnv(Env, string(yytext));
         break;
      case COMM:
         // printf("Comment\n");
         break;
      case INMATH:
         maths++;
         break;
      case DISPMATH:
         dismaths++;
         break;
      default:
         break;
      }
   }

   ListCom *p;
   p = T;
   cout << "Commands Used:\n";
   while (p)
   {
      cout << "\t" << p->s << " (" << p->count << ") " << '\n';
      p = p->next;
   }

   ListEnv *pt;
   pt = Env;
   cout << "Environment Used:\n";
   while (pt)
   {
      cout << "\t" << pt->s << " (" << pt->count << ") " << '\n';
      pt = pt->next;
   }
   printf("%d math equations found\n%d displayed equations found\n", maths / 2, dismaths / 2);
}