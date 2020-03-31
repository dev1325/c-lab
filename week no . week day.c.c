//C program to input week number and print week day.
#include<stdio.h>
#include<ctype.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
{
 char a;                             //variable declaration
 clrscr();
 printf("\nEnter an character :");
 scanf("%c",&a);
 switch(a)
  {
   case '1' : printf("\nSunday");
	      break;
   case '2' : printf("\nMonday");
	      break;
   case '3' : printf("\nTuesday");
	      break;
   case '4' : printf("\nWednesday");
	      break;
   case '5' : printf("\nThursday");
	      break;
   case '6' : printf("\nFriday");
	      break;
   case '7' : printf("\nSaturday");
	      break;
   default  : break;
  }
}
