//DIsplay the greater number from two entred numbers
#include<stdio.h>
void clrscr()
{
 system("clear");
}

void main()
{
 int a,b;                                          //variable declaration
 clrscr();
 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);                            //input values
 if(a<b)                                         //conditions
  {
   printf("\nGreater number is :%d",b);
  }
 else
  {
   printf("\nGreater number is :%d",a);
  }
}
