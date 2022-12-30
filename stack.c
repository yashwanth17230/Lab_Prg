#include<stdio.h>
#include<stdlib.h>
int *stack=NULL;
int top;
int size;
int create_stack()
{
	if(stack==NULL)
	{
		printf("Enter the stack size:");
		scanf("%d",&size);
		stack=(int*)malloc(size*sizeof(int));
	}
	else
		printf("\nStack of size %d already exists",size);
}
int push()
{
	int item;
	top++;
	*(stack+top)=item;
}
int pop()
{
	int item;
	item=*(stack+top);
	top--;
	return item;
}
int isempty()
{
	if(top==-1){
		return 1;
	}
	else
		return 0;
}
int isfull()
{
	if(top==size-1){
		return 1;
	}
	else
		return 0;
}
int display()
{
	int i;
	if(isempty()){
		printf("Stack Underflow\n");
	}
	else
		printf("\nStack");
	for(i=0;i<=top;i++)
		printf("%d",*(stack+i));
}
int peek()
{
	if(isempty()){
		printf("Stack Underflow\n");
	}
	else
		printf("Element at the stack[top]:%d\n",*(stack+top));
}
int delete_stack(){
	if(stack==NULL){
		printf("\nStack does not exist");
	}
	else{
		free(stack);
		stack=NULL;
		top=-1;
		printf("\nStack deleted");
	}
}
void main(){
	int ch,item;
	do{
		printf("***MENU***\n");
		printf("\t1.Create\n\t2.Push\n\t3.Pop\n\t4.Display\n\t5.Peek\n\t6.Delete Stack\n\t7.Exit\n");
		scanf("%d",&item);
		switch(item){
			case 1: create_stack();
				break;
			case 2: push();
				break;
			case 3: pop();
				break;
			case 4: display();
				break;
			case 5: peek();
				break;
			case 6: delete_stack();
				break;
			case 7: exit(0);
				break;
			default: printf("Invalid\n");
		}
	}while(1);
}
