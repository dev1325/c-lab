//C program to input any character and check whether it is alphabet, digit or special character
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
 if(isalpha(a)!=0)
  {
   printf("\nEntered character is an alphabet ");
  }
 else if(isdigit(a)!=0)
  {
   printf("\nEntered character is a digit");
  }
 else
  {
   printf("\nEntered character is a special character ");
  }
getch();
}
