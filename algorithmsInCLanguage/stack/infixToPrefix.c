// infixToPrefix.c
// infix to postfix using array

#include <ctype.h>
#include<stdio.h>
#include<string.h>
#define size 50                         /* Size of Stack */

char stack[size];
int top=-1;       			/* Global declarations */
 
void push(char elem)
{                       		/* Function for PUSH operation */
    stack[++top]=elem;
}
 
char pop()
{	char removedElement = stack[top];                     		/* Function for POP operation */
	top--;
    return removedElement;
}

// char pop(){
// 	return stack[top--];
// }
 
int pr(char elem)
{                 			/* Function for precedence */
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    case '^': return 4;
    }
}
 
char revstr(char str[50]){
	int i;
	char revstr[50];
	for(i=0; i<strlen(str); i++){
		revstr[i]=str[strlen(str)-i];
	}
	return revstr;
}
void prefixToPostfix(char infx[50]){
	






	char pofx[50],ch,elem;
    int i=0,k=0;

    push('#');
    
    while((ch=infx[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else if(isalnum(ch))  pofx[k++]=ch;
        else if( ch == ')'){
            while( stack[top] != '('){
                pofx[k++]=pop();
            }
            elem=pop(); /* Remove ( */
        }else{   /* Operator */
            while( pr(stack[top]) >= pr(ch))  pofx[k++]=pop();
            push(ch);
        }
    }
    
    while( stack[top] != '#'){
    	pofx[k++]=pop();
    }                               /* Pop from stack till empty */
    pofx[k]='\0';                   /* Make pofx as valid string */
    printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n",infx,pofx);

}

void main()
{                         
    char infx[50];
    
    printf("\n\nRead the Infix Expression ? ");
    scanf("%s",infx);
    prefixToPostfix(infx);
}