/*
C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
 {
  system("clear");
 }

void main()
 {
  int s,g;                                 //variable declaration
  float hra,da;
  clrscr();
  printf("ENTER BASIC SALARY          :");
  scanf("%d",&s);
  printf("ENTER HOUSE RENT ALLOWENCE  :");
  scanf("%f",&hra);
  printf("ENTER DAILY ALLOWENCE       :");
  scanf("%f",&da);
  if(s<=10000)                            //conditions
   {
    g=(hra*0.2)+(da*0.80);
   }
  else if(s>10000 && s<=20000)
   {
    g=(hra*0.25)+(da*0.90);
   }
  else
   {
    g=(hra*0.3)+(da*0.95);
   }
  printf("\nBASIC SALARY          :%d \n",s);
  printf("GROSS SALARY            :%d \n",g);
  printf("TOTAL SALARY            :%d \n",(s+g));
 }








