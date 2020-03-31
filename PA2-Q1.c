/*1.	Suppose status is a char-type variable and balance is a floating-point variable. We wish to assign the character C (current) to status if balance has a value of zero, and 0 (overdue) if balance has a value that is greater than zero. (using conditional operator)
*/

#include<stdio.h>
void clrscr()            //clear screen function
 {
  system("clear");
 }
void main()
 {
  char status;           //variable declaration
  float balance;
  clrscr();              //clear screen function call
  printf("ENTER BALANCE (value you enter will be taken as positive)  :");
  scanf("%f",&balance);
  balance<0? (balance*=-1 ):(balance*=1);
  balance==0?(status='C'):(status='O');
  printf("\nyour balance   :%f\n",balance);
  printf("your character :%c",status); 
 }
