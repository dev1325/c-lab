#include<stdio.h>
#define MAX 20
int mystringlen(char str[MAX])
{ 
  int i;
  for(i=0;str[i]!='\0';i++);
  return(i);
}

int main()
{
  char str[MAX];
  int sz;
  
  printf("\n Enter a string : "); scanf("%s",str);
  sz=mystringlen(str);
  
  printf("\n The string %s has %d characters",str,sz);
  return(0); //exit status of a program
 }