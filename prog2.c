#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	int n,m;
	printf("Enter the size of the string1:");
	scanf("%d",&n);
	printf("Enter the size of the string2:");
	scanf("%d",&m);
	printf("Enter the string1:");
	scanf("%s",str1);
	printf("Enter the string2:");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("The combination of 2 strings is: %s",strcat(str1,str2));
}
