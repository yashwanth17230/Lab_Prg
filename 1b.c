#include<stdio.h>
#include<stdlib.h>
static int n=0;
int A[10];
void create()
{
	int i, no;
	printf("Enter the size of an array elements:");
	scanf("%d",&no);
	printf("Enter the elements of the array one by one:\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&A[i]);
		n++;
	}
}
void display()
{
	int i;
	printf("The array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
void insert()
{
	int POS,ELEM,i;
	printf("\nEnter the position of the new element:");
	scanf("%d",&POS);
	printf("Enter the element to be inserted:");
	scanf("%d",&ELEM);
	for(i=n-1;i>=POS;i--)
	{
		A[i+1]=A[i];
	}
	A[POS]=ELEM;
	n++;
}
void delete()
{
	int POS,i;
	printf("Enter the position deleted:");
	scanf("%d",&POS);
	if(n==0)
	{
		printf("There is no element to delete\n");
	}
	else
	{
		for(i=POS;i<n;i++)
		{
			A[i]=A[i+1];
		}
		n--;
	}
		
} 		
void main()
{
	int ch;
	while(3)
	{
		printf("...Menu...\n");
		printf("1. Create\t2. Display\t3. Insert\t4. Delete\t5. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
				break;
			case 2:display();
				break;
			case 3:insert();
				break;
			case 4:delete();
				break;
			case 5:exit(0);
				break;
			default:printf("\nInvalid choice\n");
				break;
		}
	}
}
