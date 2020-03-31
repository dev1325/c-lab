//C program to input any alphabet and check whether it is vowel or consonant
#include<stdio.h>
#include<ctype.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
{
 char a;                             //variable declarion
 clrscr();                           //clear screen function call
 printf("\nEnter an character :");
 scanf("%c",&a);
 if(isalpha(a)!=0)                   //conditons
  {
   if( a=='a' || a=='A' ||
       a=='e' || a=='E' ||
       a=='i' || a=='I' ||
       a=='o' || a=='O' ||
       a=='u' || a=='U')
     {
      printf("\nEntered character is a vowel");
     }

   else
     {
      printf("\nEntered character is an consonant");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet even");
  }
 getch();
}
