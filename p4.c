#include<stdio.h>
#include<ctype.h>
#include<string.h>
 int compute(char symbol,int op1,int op2);
  int op1,op2,res,a[10],top,i,stack[10];
  char strs[10],symbol;
 
  int compute( char symbol,int op1,int op2)
{
  switch(symbol)
 {
    case '*': res=op1*op2;
               break;
    case '+': res=op1+op2;
               break;
    case '-': res=op1-op2;
               break;
    case '/': res=op1/op2;
               break;
    default : printf("invalid operation\n");
  }return res;
  }
  
  void main()
  {
  printf("Enter the expression\n");
  scanf("%s",strs);
for(i=0;i<=strlen(strs);i++)
 {
  symbol=strs[i];
  if(isdigit(symbol))
   {
    stack[++top]=symbol-'0';
    }
   else
   {
    op1=stack[top--];
      op2=stack[top--];
      res=compute(symbol,op1,op2);
      stack[++top]=res;
      }
      }
      res=stack[top--];
      printf("result=%d",res);
      }
       
       
 
