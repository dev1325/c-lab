#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()                           
{
 int n,a=0,b,c,f=0,i;                               //variable declaration
 clrscr();                            //clear screen function call
 printf("ENTER A NUMBER  :");
 scanf("%d",&n);
 c=n;
 while(n>0)
  {
   a=n%10;
   b=1;
   for(i=1;i<=a;i++)
    {
     b=b*i;
    }  
   f=f+b;
   n=n/10;
  }
 if(c==f)
  {
   printf("\nentered number is a krishnamurti number %d",c); 
  }
 else
  {
   printf("\nentered number is not a krishnamurti number "); 
  }
}
