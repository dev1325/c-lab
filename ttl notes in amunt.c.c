//C program to count total number of notes in given amount.
#include<stdio.h>
void main()
 {
  int n,th,fh,h,f,tw,t,fc,tc,oc;         //variable declaration
  int x=2000;
  printf("Enter an amount  :");
  scanf("%d",&n);
  th=n/x;
  n=n%x;
  x=500;
  fh=n/x;
  n=n%x;
  x=100;
  h=n/x;
  n=n%x;
  x=50;
  f=n/x;
  n=n%x;
  x=20;
  tw=n/x;
  n=n%x;
  x=10;
  t=n/x;
  n=n%x;
  x=5;
  fc=n/x;
  n=n%x;
  x=2;
  tc=n/x;
  n=n%x;
  x=1;
  oc=n/x;
  printf("\n2000 rupees notes are  :%ld",th);
  printf("\n 500 rupees notes are  :%ld",fh);
  printf("\n 100 rupees notes are  :%ld",h);
  printf("\n  50 rupees notes are  :%ld",f);
  printf("\n  20 rupees notes are  :%ld",tw);
  printf("\n  10 rupees notes are  :%ld",t);
  printf("\n   5 rupees coin  are  :%d",fc);
  printf("\n   2 rupees coin  are  :%d",tc);
  printf("\n   1 rupee  coin  are  :%d\n",oc); 
}

