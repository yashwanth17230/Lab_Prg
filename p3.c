#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
char symbol;
int compute(int op1,int op2,char symbol)
{
	switch(symbol)
	{
		case '+':res=op1+op2;
		break;
		case '-':res=op1-op2;
		break;
		case '*':res=op1*op2;
		break;
		case '/':res=op1/op2;
		break;
		case '%':res=op1%op2;
		break;
		case '^':res=op1^op2;
		break;
		default:printf("Invalid Operation");
		break;
	}
}	
int main()
{
	int op1,op2,i,r,stack[100],top;
	char postfix[40],symbol;
	printf("enter the expression");
	gets(postfix);
	for(i=0;i<strlen(postfix);i++)
	{
		symbol=postfix[i];
		if(isdigit(symbol))
		{
			stack[++top]=symbol;
		}
		else
		{
			op2=stack[top--];
			op1=stack[top--];
			r=compute(symbol,op1,op2);
			stack[++top]=r;
		}
	}
	r=stack[top--];
	printf("result= %d",r);
	return(0)
}
			

