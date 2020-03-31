//5 calculating the sum of every nth integer, beginning with the value assigned to nstart (i.e., for i= n s t a r t , nstart + n, nstart + 2*n, nstart + 3*n, etc.). Continue the looping process for all values of i that do not exceed nstop.
#include<stdio.h>
void clrscr()
 {
  system("clear");
 }
void main()
 {
  int i,sum1=0,sum2=0,sum3=0;                //variable declaration 
  clrscr();                                 //clear screen function call
printf("\nSum by for loop is      :%d\n",sum1);
printf("\nSum by for loop is      :%d\n",sum1);
printf("\nSum by for loop is      :%d\n",sum1);




  for(i=2;i<100;i+=3)                      //for loop used
   {
    sum1+=i;
   }
