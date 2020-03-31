//calculate the average of a list of n numbers.
#include<stdio.h>
void clrscr()
 {
  system("clear");
 }
void main()
 {
  int j=0,i,avg=0;                //variable declaration
  char ch; 
  clrscr();                //clear screen function call
  do                       //do while loop used
   {
    printf("\nENTER A NUMBER   :");
    scanf("%d",&i);
    avg=avg+i;
    j++;
    printf("\ndo you want to enter next value(y/n)  :");
    fflush(stdin);
    scanf(" %c",&ch);
   }while(ch=='y');
   avg=(avg/j);
  printf("\naverage value is   :%d\n",avg);
 }
   
