#include<stdio.h>
#include<stdlib.h>
int fib(int n);
int main()

{ 
 int n,x,i;
scanf("%d",&n);
 for(i=0;i<n;i++)
printf("%d",fib(i));

}
 int fib(int n)
 {
  
 if(n==0)
 return 0;
   else if(n==1)
   return 1;
   else
    return fib(n-1)+fib(n-2);
     
 }
