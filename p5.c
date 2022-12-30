#include<stdio.h>
#include<stdlib.h>
int stack[10],i,n,x,item;
struct node
{
	int info;
	struct node*link;
};
struct node*top=0;
void push(int x)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof (struct node));
	newnode->info=x;
	newnode->link=top;
	top=newnode;
}		
void main()
{
	int op;
	do
	{
		printf("Menu\n 1:push,2:pop,3:display,4:exit");
		printf("Enter the choice\n");
		scanf("%d\n",&op);
		switch(op)
		{
			case 1:printf("enter the number of elements\n");
				  scanf("%d",&n);
				  for(i=0;i<n;i++)
				  {
				  	scanf("%d",&x);
				  	push(x);
				  }
				  break;
			case 2:
			break;
			case 3:
			break;
			case 4:exit(0);
			break;	
			default:("Invalid input");
			break;
		}		
	}while(1);			  	
}
			
