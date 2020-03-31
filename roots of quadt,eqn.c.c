//C program to find all roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


void main()
{
 float a,b,c,s;                       //variable declaration
 clrscr();                            //clear screen function call
 printf("\nEnter coefficient of X^2  :");
 scanf("%f",&a);
 printf("\nEnter coefficient of X  :");
 scanf("%f",&b);
 printf("\nEnter the constant :");
 scanf("%f",&c);
 s=sqrt((b*b)-(4*a*c));              //formula
 printf("\n1st root is  :%f",(-b+s)/(2*a));
 printf("\n2nd root is  :%f",(-b-s)/(2*a));
}
