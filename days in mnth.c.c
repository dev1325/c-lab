//Write a C program to input month number and print number of days in that month.
#include<stdio.h>
#include<ctype.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
 {
  int a;                                //variable declaration
  clrscr();                             //clear screen funtion call
  printf("\nEnter an character :");
  scanf("%d",&a);
  switch(a)
   {
    case 1  : printf("\nJanuary\n"); 
	      break;
    case 2  : printf("February\n");
	      break;
    case 3  : printf("\nMarch\n");
	      break;
    case 4  : printf("\nApril\n");
	      break;
    case 5  : printf("\nMay\n");
	      break;
    case 6  : printf("\nJune\n");
	      break;
    case 7  : printf("\nJuly\n");
 	      break;
    case 8  : printf("\nAugust\n");
	      break;
    case 9  : printf("\nSeptember\n");
	      break;
    case 10 : printf("\nOctober\n");
	      break;
    case 11 : printf("\nNovember\n");
	      break;
    case 12 : printf("\nDecember\n");
    default : break;
  }
 
}
