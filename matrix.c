#include<stdio.h>
int main()
{
 int a[20][20],i,j,m,n,flag=0;
 printf("Enter the rows and columns");
 scanf("%d %d",&n,&m);
 printf("Enter the matrix elements ");
  for(i=0;i<n;i++)
   for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
  
   for(i=0;i<=n;i++)
   {
   for(j=0;j<=m;j++)
   {
    if(a[i][j]==0)
     flag++;
   }
   }
   if(flag>((m*n)/2))
    printf("Yes");
   else
    printf("No");
    }
