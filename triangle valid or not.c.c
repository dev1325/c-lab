//C program to input all sides of a triangle and check whether triangle is valid or not
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
{ 
 int a,b,c;                           //variable declaration
 clrscr();                            //clear screen function call
 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 if ((a+b+c)==180 )                   //conditions  
   {
    printf("\nTriangle is valid");
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getch();
}
