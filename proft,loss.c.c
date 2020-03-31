//C program to calculate profit or loss
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


void main()
{
 int n,m;                             //variable declariation
 clrscr();                            //clear screen function call
 printf("ENTER COST PRICE  :");
 scanf("%d",&n);
 printf("ENTER SELLING PRICE  :");
 scanf("%d",&m);
 if (m>n)                             //conditions
  {
   printf("profit\n");
  }
 else if (n>m)
  {
   printf("loss\n");
  }
 else
  {
   printf("no profit no loss\n");
  }
}
