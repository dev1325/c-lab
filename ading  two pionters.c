#include<stdio.h>


void add(int *a,int *b)
{
   int c;
   c=*a+*b;
   printf("Sum is         :%d",c);
}

void swap(int *a,int *b)
 {
  int c;
  c=*a;
  *a=*b;
  *b=c;
 }
 
 int main()
 {
  int *p1,*p2,n1,n2;
  printf("Enter number a :");
  scanf("%d",&n1);
  printf("Enter number b :");
  scanf("%d",&n2);
  p1=&n1;
  p2=&n2;
  add(p1,p2);
  swap(p1,p2);
  printf("\nnumber a       :%d",n1);
  printf("\nnumber b       :%d",n2);
 }