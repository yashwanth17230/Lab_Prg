#include<stdio.h>
int gcd(int a,int b);
void main()
{
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	gcd(a,b);
}
int gcd(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
	if(a<b)
	{
		gcd(b,a);
		printf("%d",a);
	}
	else
	{
		return gcd(b,a%b);
	}
}
	
