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
void main()
{
	int ch;
	while(3)
	{
		printf("...Menu...\n");
		printf("1. Create\t2. Display\t3. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
				break;
			case 2:display();
				break;
			case 3:exit(0);
				break;
			default:printf("\nInvalid choice\n");
				break;
		}
	}
}
