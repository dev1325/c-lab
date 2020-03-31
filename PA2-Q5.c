//loop that will calculate the sum of every third integer, beginning with i=2 (icy calculate the sum 2 + 5 + 8 + 11 + - ) for all values of i that are less than 100.
#include<stdio.h>
void clrscr()
 {
  system("clear");
 }
void main()
 {
  int i,sum1=0,sum2=0,sum3=0;                //variable declaration 
  clrscr();                                 //clear screen function call
  for(i=2;i<100;i+=3)                      //for loop used
   {
    sum1+=i;
   }
   i=2;
  while(i<100)                             //while loop used
   {
    sum2+=i;
    i+=3;
   }
  i=2;
  do                                       //do while loop used
   {
    sum3+=i;
    i+=3;
   }while(i<100);
   printf("\nSum by for loop is      :%d\n",sum1);
   printf("\nSum by while loop is    :%d\n",sum2); 
   printf("\nSum by do while loop is :%d\n",sum3);
 }
