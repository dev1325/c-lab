/*
Given an integer, n, perform the following conditional actions:
If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
*/

#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()                           
{
 int n;                               //variable declaration
 clrscr();                            //clear screen function call
 printf("ENTER A NUMBER  :");
 scanf("%d",&n);
 if(n%2!=0)                          //conditions 
   {
    printf("\nWIERD");
   }
 else
   {
     if( n>=2 && n<=5)
       {
        printf("\nNOT WIERD");       //output
       }
     else if( n>=6 && n<=20)
       {
        printf("\nWIERD");
       }
     else
       {
        printf("\nNOT WIERD");
       }
   }
}
