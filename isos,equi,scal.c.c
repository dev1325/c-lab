//C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
void clrscr()                                       //clear screen funtion declaration
{
 system("clear");
}

void main()
{
 int a,b,c,a1,b1,c1;                               //variable declaration
 clrscr();                                         //clear screen function call
 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 printf("\nEnter 3 angles of the triangle  :");
 scanf("%d %d %d",&a1,&b1,&c1);
 if ( (a+b>c) && (a+c>b) && (c+b>a) )             //conditions
   {
    if(a==b && b==c && a1==b1 && b1==c1)
      {
       printf("\nTringle formed is an Equilateral triangle");
      }
    else if(a==b && b!=c)
      {
       printf("\nTrinangle in Isoceles triangle")
      }
    else if (a!=b && b!=c && a1!=b1 && b1!=c1)
      {
       printf("\nTriangle is a Scalene triangle")
      }
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getch();
}
