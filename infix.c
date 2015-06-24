#include<stdio.h>

#define MAXCOLS 
#define TRUE 1
#define FALSE 0
#define stacksize 100

struct stack{
int top;
char items[MAXCOLS];
};

int prcd(char topsymb,char symbol){
if(topsymb=='(')
return 0;
if(symb=='(')
return 0;
if(symb==')')
return 1;
if(topsymb=='^'&&symb=='^')
return 0;
if(topsymb=='^'&&symb!='^')
return 1;
if(topsymb!='^'&&symb=='^')
return 0;
if((topsymb=='*'||topsymb=='/')&&(symb!='^'))
return 1;
if((topsymb=='+'||topsymb=='-')&&(symb=='-'||symb=='+'))
return 1;
if((topsymb=='+'||topsymb=='-')&&(symb=='*'||stmb=='/'))
return 0;
}

int isoperand