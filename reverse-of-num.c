#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()                           
{
 int n,a=0,b,c;                       //variable declaration
 clrscr();                            //clear screen function call
 printf("ENTER A NUMBER  :");
 scanf("%d",&n);
 c=n;
 while(n>0)
  {
   a=n%10;
   b=b+a;
   if(n<=10)
    {
     break;
    }
   b=b*10;
   n=n/10;
  }
 printf("\nreverse number is :%d",b); 
}
