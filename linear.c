#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct  node*link;
};
struct node*top=0;
void push(int x)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}
void pop()
{
	struct node*temp;
	temp=top;
	if(temp==NULL)
		printf("underflow\n");
	else
	{
		printf("deleted item is=%d\n",top->data);
		top=top->link;
		free(temp);
	}
}
void display()
{
	struct node*temp;
	temp=top;
	if(temp==NULL)
		printf("stack is empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d=>",temp->data);
			temp=temp->link;
		}
		printf("NULL\n");
	}
}
void linear_search()
{
	struct node*temp;
	int flag=0,i=1,key;
	printf("enter the element to be searched:");
	scanf("%d",&key);
	temp=top;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			flag=1;
			break;
		}
		temp=temp->link;
		i++;
	}
	if(flag==1)
		printf("The element %d is found at loctaion %d\n",key,i);
	else
		printf("Unsuccessful search:");
}
void concat()
{
	struct node *head1, *head2, *temp1,*temp2,*newnode1,*newnode2,*j;
	int n,i,m;
	printf("enter the number of nodes in list A:");
	scanf("%d",&n);
	head1=NULL;
	for(i=0;i<n;i++)
	{
		newnode1=malloc(sizeof(struct node));
		scanf("%d",&newnode1->data);
		newnode1->link=0;
		if(head1==0)
			head1=temp1=newnode1;
		else
		{
			temp1->link=newnode1;
			temp1=newnode1;
		}
	}
	printf("enter the number of node in list B:");
	scanf("%d",&m);
	head2=NULL;
	for(i=0;i,m;i++)
	{
		newnode2=malloc(sizeof(struct node));
		scanf("%d",&newnode2->data);
		newnode2->link=0;
		if(head2==0)
			head2=temp2=newnode2;
		else
		{
			temp2->link=newnode2;
			temp2=newnode2;
		}
	}
	j=head1;
	while(j->link!=NULL)
	{
		j=j->link;
	}
	
	j->link=head2;
	head2=NULL;
	printf("concatenated list id \n");
	j=head1;
	while(j!=NULL)
	{
		printf("%d=>",j->data);
		j=j->link;
	}
}
int main()
{
	int choice,x,n,i;
	printf("***menu***\n");
	printf("1.create/push\t2.pop\t3.display\t4.linear search\t5.concatenation of 2 lists\t6.exit\n");
	printf("\n");
	while(1)
	{
		printf("enter your choice:");
		scanf("%d",&choice);	
		switch(choice)
		{
			case 1:printf("enter the size of stack");
				scanf("%d",&n);
				printf("enter the elements");
				for(i=0;i<n;i++)
					scanf("%d",&n);
				break;
			case 2:printf("\npop\n");
				pop();
				break;
			case 3:printf("\n display\n");
				display();
				break;
			case 4:linear_search();
				break;
			case 5:concat();
				break;
			case 6:exit(0);
				break;
			default:printf("invalid\n");
		}
	}
}
