/*
C program to print message depending upon the value entered
HOT          if the value is 1
LUKE WARM    if the value is 2
COLD         if the value is 3
OUT OF RANGE for any other value
*/
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


void main()
 {
  int flag;                            //variable declaration
  clrscr();                            //clear screen function call
  printf("\nENTER A DIGIT ");  
  scanf("%d",&flag);
  switch(flag)
  {
    case 1 :printf("\nHOT\n");
           break;
    case 2 :printf("\nLUKE WARM\n");
           break;
    case 3 :printf("\nCOLD\n");
           break;
    default:printf("\nOUT OF RANGE\n");  
  }
 }



