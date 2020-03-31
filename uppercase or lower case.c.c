//C program to check whether a character is uppercase or lowercase alphabet.
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
   if(islower(a)!=0)
     {
      printf("\nEntered character is in lower case");
     }
   else
     {
      printf("\nEntered character is in lower case");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet even");
  }
 getch();
}
