#include<stdio.h>
#include<stdlib.h>
int stack[10],i,top,max=100,min;
void push();
void pop();
void display();
void main()
{
	int m;
	while(1)
	{
		printf("Menu\n 1:push,2:pop,5:display,6:exit");
		printf("Enter the option\n");
		scanf("%d",&m);
		switch(m)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;	
			default:("Invalid input");
			break;
		}
	}
}
void push()
{
	int item;
	printf("Enter the item\n");
	scanf("%d",&item);
	if(top==max)
	{
		printf("overflow\n");
	}
	else
	{
		stack[top++]=item;
		++top;
	}	
}
void pop()
{
	int item;
	printf("Enter the item\n");
	scanf("%d",&item);
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		stack[top--]=item;
		--top;
	}
}				
void display()
{
	printf("The elements are\n");
	for(i=top;i>0;i--)
	{
		printf("%d",stack[i]);
	}
}					
