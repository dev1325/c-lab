/*
C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
 {
  system("clear");
 }

void main()
 {
  int us,t;                            //variable declaration
  float bill; 
  clrscr();                           
  printf("ENTER NUMBER OF UNITS    :");
  scanf("%d",&us);
  if(us<=50)
   {
    printf("jjs");
    bill=(us*0.5);
    bill=bill+(bill*0.2);
   }
  else if(us>50 && us<=150)
   {
    t=(us-50);
    bill=(t*0.75)+25.00 ;
    bill=bill+(bill*0.2);
   }
  else if(us>150 && us<=250)
   { 
    t=(us-150);
    bill=(t*1.20)+100.00 ;
    bill=bill+(bill*0.2);
   }
  else
   { 
    t=(us-250);
    bill=220.00+(t*1.5);
    bill=bill+(bill*0.2);
   }
 printf("\nNUMBER OF UNITS   : %d",us);
 printf("\nBILL AMOUNT       : %f \n",bill);
 printf("***AN ADDITIONAL SURCHARGE OF 20'/, IS ADDED TO THE BILL***\n");
}
