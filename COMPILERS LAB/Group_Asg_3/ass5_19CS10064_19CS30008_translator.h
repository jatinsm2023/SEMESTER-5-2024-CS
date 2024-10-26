

#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H


#include<bits/stdc++.h>

using namespace std;


#define __VOID_SIZE 0
#define __FUNCTION_SIZE 0
#define __CHARACTER_SIZE 1
#define __INTEGER_SIZE 4
#define __POINTER_SIZE 4
#define __FLOAT_SIZE 8



class symbol;  // entry of a symbol table
class symboltype;  // type of entry in symbol table
class symboltable; // symbol table

class quad;    // entry of a quad array
class quadarray;   // quad array


// Global Variables
extern symbol* currentSymbol; // Pointer to current symbol
extern symboltable* currentST; // Pointer to currently active symbol table
extern symboltable* globalST;   // Pointer to global symbol table
extern quadarray quadList;  // List of quads
extern int STCount; // Count of symbol tables
extern string blockName;    // Name of current block ( for nested blocks)

// Bison functions
extern char* yytext;
extern int yyparse();


// To represent a symbol table entry type
class symboltype
{
public:
    string type;      // Type of symbol      
    int width;          // Size of symbol ( array->size, otherwise 1 )
    symboltype* arrtype;     // for arrays, pointer to the type of the array element
    
    symboltype(string type_,symboltype* arrtype_= NULL,int width_=1);
};


// Stores a single symbol table entry
class symbol{
public:
    string name;   // Name of the symbol
    symboltype* type;  // Type of the symbol
    string value; // Value of the symbol
    int size; // Size of the symbol
    int offset; // Offset of the symbol
    symboltable* nestedtable; // Pointer to the nested symbol table

    symbol(string name_, string t = "int", symboltype* arrType = NULL, int width = 0);
    symbol* update(symboltype* t);
};

// Stores a symbol table
class symboltable{
public:
    string name; // Name of the symbol table
    list<symbol> allsymbols; // List of all symbols in the symbol table
    symboltable* parent;   // Pointer to the parent symbol table
    int tempCount; // Count of temporary variables


    symboltable(string name_ = "NULL");   
    symbol* lookup(string name);
    static symbol* gentemp(symboltype* t,string initval = ""); // Generate a temporary variable, insert it in the symbol table and return a pointer to it
    void print();
    void update();
};

//To represent a quad entry
class quad{
public:
    string op; // Operator
    string result; // Result
    string arg1; // Argument 1
    string arg2; // Argument 2


    quad(string result_,string arg1_,string op_ = "=",string arg2_ = "");
    quad(string result_,int arg1_,string op_ = "=",string arg2_ = "");
    quad(string result_,float arg1_,string op_ = "=",string arg2_ = "");

    void print();
};

// entire quad array
class quadarray{
public:
    vector<quad> quads; // Array of quads

    void print();
};

//To represent an array
class arraytype{
public:
    string arrtype; // Type of array (arr,ptr)
    symbol* loc;    // Pointer to the symbol table entry of the array
    symbol* arr;    // Pointer to the symbol table entry of the array
    symboltype* type;   // Type of the array, for multidimensional arrays
};

//To represent a statement
class statement{
public:
    list<int> nextlist; // List of next statements
};

//To represent an expression
class expression{
public:
    string type; // Type of the expression
    symbol* loc;  // Pointer to the symbol table entry of the expression
    list<int>truelist; // List of true statements
    list<int> falselist; // List of false statements
    list<int> nextlist;   // List of next statements
};

//To print a quad in the correct label
void emit(string op,string res,string arg1="",string arg2=""); // Function to emit a quad
void emit(string op,string res,int arg1,string arg2="");
void emit(string op,string res,float arg1,string arg2="");

//A function to create a new list with i as the first element
list<int> makelist(int i);
//A function to merge two lists
list<int>merge(list<int> &a,list<int> &b);
//A function to backpatch a list with address
void backpatch(list<int> &a,int addr);


// check types of symbols
bool typecheck(symbol* &t1,symbol* &t2);
bool typecheck(symboltype* t1,symboltype* t2);

// convert types of symbols
symbol* convertToSymbol(symbol* s,string t);

// int to string
string int_to_string(int n);

// float to string

string float_to_string(float n);

// convert a int to bool ( 0 -> false, else true) 
expression* convertInt2Bool(expression* e);

// convert a bool to int ( false -> 0, true -> 1)
expression* convertBool2Int(expression* e);

// change current active symbol table to another
void changeTable(symboltable* newtable);

// return next instruction number
int nextinstr();

// return size of a symboltype
int getSize(symboltype* t);

// print a type
string checktype(symboltype* t);

#endif