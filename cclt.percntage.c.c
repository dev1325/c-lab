/*C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according*/

#include<stdio.h>
void clrscr()                   //funtion to clear screen
 {
  system ("clear");
 }

void main()
 {
  float mp,mc,mm,mb,mcs,p;                             //declaration of variables
  clrscr();                                            //clear screen function call
  printf("ENTER MARKS OBTAINED IN PHYSICS    :");      //input values from user
  scanf("%f",&mp);
  printf("ENTER MARKS OBTAINED IN CHEMISTRY  :");
  scanf("%f",&mc);
  printf("ENTER MARKS OBTAINED IN MATHS      :");
  scanf("%f",&mm);
  printf("ENTER MARKS OBTAINED IN BIOLOGY    :");
  scanf("%f",&mb);
  printf("ENTER MARKS OBTAINED IN COMPUTER   :");
  scanf("%f",&mcs);
  p=(mp+mc+mm+mb+mcs)*0.2;
  
   if (p>=90)                                         //assigning grades
    {
     printf("\nYOUR GRADE IS A");
    }
   else if (p>=80 && p<90)
    {
     printf("\nYOUR GRADE IS B");
    } 
   else if (p>=70 && p<=80)
    {
     printf("\nYOUR GRADE IS C");
    }
   else if (p>=60 && p<=70)
    {
     printf("\nYOUR GRADE IS D");
    }
   else if (p>=40 && p<=40)
    {
     printf("\nYOUR GRADE IS E");
    }
   else
    {
     printf("\nYOUR GRADE IS F");
    }
 }
