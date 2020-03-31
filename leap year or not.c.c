//C program to check whether a year is leap year or not.
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
{
 int a;                              //variable declaration
 clrscr();                           //clear screen function used
 printf("\nEnter a year  :");
 scanf("%d",&a);
 if(a%4==0)                          //condition
  {
   printf("\nEntered year is a leap year");
  }
 else
  {
    printf("\nEntered year is not a leap year");
  }

}
