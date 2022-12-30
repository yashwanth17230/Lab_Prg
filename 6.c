#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int input(char symbol)
{
	switch(symbol)
	{
		case'+':return 2;
		case'-':return 2;
		case'*':return 4;
		case'/':return 4;
		case'^':return 5;
		case'%':return 5;
		case'(':return 0;
		case'#':return -1;
		default:return 8;
	}
}
int Stack(char symbol)
{
	switch(symbol)
	{
		case'+':return 1;
		case'-':return 1;
		case'*':return 3;
		case'/':return 3;
		case'^':return 6;
		case'%':return 6;
		case'(':return 9;
		case')':return 0;
		default:return 7;
	}
}
void infix_postfix(char infix[],char postfix[])
{
	int top=-1,j=0,i;
	char s[30],symbol;
	s[++top]='#';
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		while(input(s[top])>Stack(symbol))
		{
			postfix[j++]=s[top--];
		}
		if(input(s[top])!=Stack(symbol))
		{
			s[++top]=symbol;
		}
		else
		{
			top--;
		}
	}
	while(s[top]!='#')
	{
		postfix[j++]=s[top--];
	}
	postfix[j]='\0';
}
void main()
{
	char infix[20],postfix[20];
	printf("\nEnter the infix expression:");
	scanf("%s",infix);
	printf("\nThe infix expression is: %s",infix);
	infix_postfix(infix,postfix);
	printf("\nThe postfix expression is: %s",postfix);
}
