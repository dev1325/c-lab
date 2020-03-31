//to display the consecutive digits 0, 1, 2, . . . ,9, with one digit on each line(while, do-while, for loop)
#include<stdio.h>
void clrscr()
 {
  system("clear");         //clear screen function
 }
void main()
 {
  int i=0;                //variable declaration
  clrscr();               //clear screen function call
 while (i<10)             //while loop used
   {
    printf("%d\n",i); 
    i++;
   }
 printf("\n\nWITH DO WHILE\n");  
 i=0;
  do                    //do while loop used
   {
    printf("%d\n",i);
    i++;
   }while(i<10);
 }
 
