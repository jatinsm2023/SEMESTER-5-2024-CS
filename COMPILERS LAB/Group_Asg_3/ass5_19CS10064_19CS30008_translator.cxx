#include "ass5_19CS10064_19CS30008_translator.h"
#include<bits/stdc++.h>
#include <iomanip>
using namespace std;


// Global Variables
symbol* currentSymbol;
symboltable* currentST;
symboltable* globalST;
quadarray quadList;
int STCount;
string blockName;

// last encountered type
string lastType;


// constructor for symboltype struct
symboltype::symboltype(string type_,symboltype* arrtype_,int width_){
    type = type_;
    arrtype = arrtype_;
    width = width_;
}


// constructor for symbol struct
symbol::symbol(string name_, string t, symboltype* arrType, int width){
    name = name_;
    type = new symboltype(t,arrType,width);
    value = "-";
    size = getSize(type);
    offset = 0;
    nestedtable = NULL;
}

// function to update symbol type
symbol* symbol::update(symboltype* t){
    type = t;
    size = getSize(t);
    return this;
}

// symboltable struct
symboltable::symboltable(string name_){
    name = name_;
    parent = NULL;
    tempCount = 0;
}

// function to lookup a symbol in symbol table
symbol* symboltable::lookup(string name){
    // search in symbol table
    for(list<symbol>::iterator it = allsymbols.begin(); it != allsymbols.end(); it++){
        if(it->name == name){
            return &(*it);
        }
    }

    // if not found, search in parent symbol table
    symbol* s;
    if(parent != NULL){
        s =  parent->lookup(name);
    }
    if(currentST == this && s == NULL){
        // if smbol is not found, create the symbol, add it to symbol table and return it
        symbol *temp = new symbol(name);
        allsymbols.push_back(*temp);
        return &allsymbols.back();
    }
    else if(s!=NULL){
        // found in parent symbol table
        return s;
    }

    return NULL;
}

// function to generate a temporary variable
symbol* symboltable::gentemp(symboltype* t,string initval){
    // create a new symbol
    string name = "t" + int_to_string(currentST->tempCount);
    currentST->tempCount++;
    symbol* temp = new symbol(name);
    temp->type = t;
    temp->value = initval;
    temp->size = getSize(t);

    // add the symbol to symbol table
    currentST->allsymbols.push_back(*temp);
    return &currentST->allsymbols.back();
}

// function to print symbol table
void symboltable::print(){
   for(int i=0; i<100; i++){
         cout<<"-";
   }
    cout<<endl;
    cout << "Symbol Table: " << setfill(' ') << left << setw(50) << this->name;
    cout << "Parent Table: " << setfill(' ') << left << setw(50) << ((this->parent != NULL) ? this->parent->name : "NULL") << endl;
    for(int i = 0; i < 120; i++) {
        cout << '-';
    }
    cout << endl;

    cout << setfill(' ') << left << setw(20) << "Name";
    cout << setfill(' ') << left << setw(20) << "Type";
    cout << setfill(' ') << left << setw(20) << "Intial Value";
    cout << setfill(' ') << left << setw(20) << "Size";
    cout << setfill(' ') << left << setw(20) << "Offset";
    cout << setfill(' ') << left << setw(20) << "Nested Table" << endl;

    for(int i = 0; i < 120; i++) {
        cout << '-';
    }

    cout << endl;

    list<symboltable *> tables;

    // print all symbols in symbol table
    for(list<symbol>::iterator it = this->allsymbols.begin(); it!=this->allsymbols.end(); it++){
        cout<<left<<setw(25)<<it->name;
        cout<<left<<setw(25)<<checktype(it->type);
        cout<<left<<setw(20)<<(it->value != "" ? it->value : "-");
        cout<<left<<setw(15)<<it->size;
        cout<<left<<setw(15)<<it->offset;
        cout<<left;
    }

    for(int i = 0; i < 120; i++) {
        cout << '-';
    }

    cout << endl<<endl;

    // print nested symbol tables
    for(list<symboltable *>::iterator it = tables.begin(); it!=tables.end(); it++){
        (*it)->print();
    }
}

// function to update symbol table
void symboltable::update(){
    list<symboltable *> tables;
    int off_set;
    // update offset of symbols in symbol table
     for(list<symbol>::iterator it = this->allsymbols.begin(); it !=  this->allsymbols.end(); it++) {
        if(it == this->allsymbols.begin()) {
            it->offset = 0;
            off_set = it->size;
        }
        else {
            it->offset = off_set;
            off_set = it->offset + it->size;
        }

        if(it->nestedtable != NULL) {
            tables.push_back(it->nestedtable);
        }
    }
    
    // update nested symbol tables
    for(list<symboltable *>::iterator it = tables.begin(); it != tables.end(); it++) {
        (*it)->update();
    }
}

// constructor for quad struct
quad::quad(string result_,string arg1_,string op_,string arg2_){
    result = result_;
    arg1 = arg1_;
    op = op_;
    arg2 = arg2_;
}

// constructor for quad struct
quad::quad(string result_,int arg1_,string op_,string arg2_){
    result = result_;
    arg1 = int_to_string(arg1_);
    op = op_;
    arg2 = arg2_;
}

// constructor for quad struct
quad::quad(string result_,float arg1_,string op_,string arg2_){
    result = result_;
    arg1 = float_to_string(arg1_);
    op = op_;
    arg2 = arg2_;
}

// function to print quad
void quad::print() {
    if(op == "=")       // Simple assignment
        cout << result << " = " << arg1;
    else if(op == "*=")
        cout << "*" << result << " = " << arg1;
    else if(op == "[]=")
        cout << result << "[" << arg1 << "]" << " = " << arg2;
    else if(op == "=[]")
        cout << result << " = " << arg1 << "[" << arg2 << "]";
    else if(op == "goto" || op == "param" || op == "return")
        cout << op << " " << result;
    else if(op == "call")
        cout << result << " = " << "call " << arg1 << ", " << arg2;
    else if(op == "label")
        cout << result << ": ";

    // Binary Operators
    else if(op == "+" || op == "-" || op == "*" || op == "/" || op == "%" || op == "^" || op == "|" || op == "&" || op == "<<" || op == ">>")
        cout << result << " = " << arg1 << " " << op << " " << arg2;

    // Relational Operators
    else if(op == "==" || op == "!=" || op == "<" || op == ">" || op == "<=" || op == ">=")
        cout << "if " << arg1 << " " << op << " " << arg2 << " goto " << result;

    // Unary operators
    else if(op == "= &" || op == "= *" || op == "= -" || op == "= ~" || op == "= !")
        cout << result << " " << op << arg1;

    else
        cout << "Unknown Operator";
}

// print quad array
void quadarray::print(){
   for(int i=0; i<100; i++){
         cout<<"-";
   }
    cout<<endl;
    cout<<"Three Address Code"<<endl;
    for(int i=0; i<100; i++){
         cout<<"-";
    }
    cout<<endl;

    int count = 0;
    for(int i=0; i<quads.size(); i++, count++){
        if (quads[i].op != "label")
        {
            cout << left << setw(4) << count << " : ";
            quads[i].print();
        }
        else{
            cout<<endl<<left<<setw(4)<<count<<": ";
            quads[i].print();
        }
        cout<<endl;
    }

}

// function to emit a quad
void emit(string op,string res,string arg1,string arg2){
    quad *q = new quad(res,arg1,op,arg2);
    quadList.quads.push_back(*q);
}

// function to emit a quad
void emit(string op,string res,int arg1,string arg2){
    quad *q = new quad(res,arg1,op,arg2);
    quadList.quads.push_back(*q);
}

// function to emit a quad
void emit(string op,string res,float arg1,string arg2){
    quad *q = new quad(res,arg1,op,arg2);
    quadList.quads.push_back(*q);
}

// function to create a new list with i as the first element
list<int> makelist(int i){
    list<int> temp;
    temp.push_back(i);
    return temp;
}

// function to merge two lists
list<int> merge(list<int> &a,list<int> &b){
    a.merge(b);
    return a;
}

// function to backpatch a list with address
void backpatch(list<int>&a,int addr){
    for(list<int>::iterator it = a.begin(); it != a.end(); it++){
        quadList.quads[*it].result = int_to_string(addr);
    }
}

// type checking functions
bool typecheck(symbol* &s1,symbol* &s2){
    symboltype* t1 = s1->type;
    symboltype* t2 = s2->type;
    if(typecheck(t1,t2)){
        return true;
    }
    else if(s1==convertToSymbol(s1,t2->type)){
        return true;
    }
    else if(s2==convertToSymbol(s2,t1->type)){
        return true;
    }
    else{
        return false;
    }
}

bool typecheck(symboltype* t1,symboltype* t2){
    if(t1==NULL || t2==NULL){
        return false;
    }
    if(t1->type != t2->type){
        return false;
    }
    if(t1->type != t2->type){
        return false;
    }
    return typecheck(t1->arrtype,t2->arrtype);
}

symbol* convertToSymbol(symbol* s,string t){
    symbol *temp = symboltable::gentemp(new symboltype(t));

    if(s->type->type == "float") {
        if(t == "int") {
            emit("=", temp->name, "float2int(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            emit("=", temp->name, "float2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    if(s->type->type == "int") {
        if(t == "float") {
            emit("=", temp->name, "int2float(" + s->name + ")");
            return temp;
        }
        else if(t == "char") {
            emit("=", temp->name, "int2char(" + s->name + ")");
            return temp;
        }
        return s;
    }

    if(s->type->type == "char") {
        if(t == "int") {
            emit("=", temp->name, "char2int(" + s->name + ")");
            return temp;
        }
        else if(t == "float") {
            emit("=", temp->name, "char2float(" + s->name + ")");
            return temp;
        }
        return s;
    }

    return s;
}


// function to convert int to string
string int_to_string(int n){
    return to_string(n);
}

// function to convert float to string
string float_to_string(float n){
    return to_string(n);
}

// int to bool conversion
expression* convertInt2Bool(expression* e){
    if(e->type != "bool"){
        e->falselist = makelist(nextinstr());
        emit("==", "", e->loc->name, "0");
        e->truelist = makelist(quadList.quads.size());
        emit("goto", "");
    }
    return e;
}

// bool to int conversion
expression* convertBool2Int(expression* e){
    if(e->type != "bool"){
        e->loc = symboltable::gentemp(new symboltype("int"));
        backpatch(e->truelist, nextinstr());
        emit("=", e->loc->name, "true");
        int next = nextinstr();
        emit("goto", int_to_string(next+1));
        backpatch(e->falselist, nextinstr());
        emit("=", e->loc->name, "false");
    }
    return e;
}

// switch symbol table
void changeTable(symboltable* newtable){
    currentST = newtable;
}

// return next instruction number
int nextinstr(){
    return quadList.quads.size();
}

// return size of a symboltype
int getSize(symboltype* t){
    if(t->type == "void")
        return __VOID_SIZE;
    else if(t->type == "char")
        return __CHARACTER_SIZE;
    else if(t->type == "int")
        return __INTEGER_SIZE;
    else if(t->type == "ptr")
        return __POINTER_SIZE;
    else if(t->type == "float")
        return __FLOAT_SIZE;
    else if(t->type == "arr")
        return t->width * getSize(t->arrtype);
    else if(t->type == "func")
        return __FUNCTION_SIZE;
    else
        return -1;
}

// function to print expression
string checktype(symboltype* t) {
    if(t == NULL)
        return "null";
    else if(t->type == "void" || t->type == "char" || t->type == "int" || t->type == "float" || t->type == "block" || t->type == "func")
        return t->type;
    else if(t->type == "ptr")
        return "ptr(" + checktype(t->arrtype) + ")";
    else if(t->type == "arr")
        return "arr(" + int_to_string(t->width) + ", " + checktype(t->arrtype) + ")";
    else
        return "unknown";
}


int main(){
    STCount = 0;

    globalST = new symboltable("Global");
    currentST = globalST;
    blockName = "";

    yyparse();
    globalST->update();
    quadList.print();
    cout<<endl;
    globalST->print();

    return 0;

}