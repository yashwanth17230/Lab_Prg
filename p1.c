#include<stdlib.h>
#include<stdio.h>
int i,n,stack[10],pos,ele,loc,op,top=-1,MAX_SIZE;
void push();
void display();
void pop();
//void condn();

void main()
{ 
printf("maxlimit");
scanf("%d",&MAX_SIZE);
  
    
 
 
 do{
 printf("MENU:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
   printf("enter the choice");
    scanf("%d",&op);
     switch(op)
     {
      case 1:push();
              break;
      case 2:pop();
             break;
      case 3:display();
             break; 
     
             
     /* case 4:condn();
             break;  */     
             
        case 5:exit(0);
              break;   
              
       default:printf("INVALID OPTION");
     }
     }while(!(op==5));
     
     }
  
  void push()
   { 
     
     
    if(top==MAX_SIZE-1)
    {
          printf("stackfull");
          
     }
    else
    {
      printf("enter the element to be pushed");
      scanf("%d",&ele);
      stack[++top]=ele;
      
     }
   }
    
   
   
   void pop()
  
  {
     if(top==-1)
      {
        printf("stack is empty\n");
        }
       else
       
       {
              ele=stack[top--];
         
        }
        }
    void display()
    {
    for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);
    }
     
