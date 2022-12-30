#include<stdio.h>
#include<string.h>
void main()
{
   char ch[10];
   int i;
   printf("Enter five characters:");
   for(i=0;i<5;i++)
   	scanf("%c",&ch[i]);
   
   for(i=0;i<5;i++)
   	printf("The character a[%d] is %c\n",i,ch[i]);
}
