#include<stdio.h>
int main()
{
	int  n,a[20],even[20],odd[20],i,x=0,y=0;
	printf("Enter the no. of elements in a:");
	scanf("%d",&n);
	printf("Enter %d elements of a:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Element %d is:",i);
		scanf("%d",&a[i]);
	}
	printf("The entered elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	if(a[i]%2==0)
	{
		even[x]=a[i];
		x++;
	}
	else
	{
		odd[y]=a[i];
		y++;
	}
	printf("\nEven elements are:");
	for(i=0;i<x;i++)
		printf("%d\t",even[i]);
	printf("\nOdd elements are:");
	for(i=0;i<y;i++)
		printf("%d\t",odd[i]);
	printf("\n");
}		
