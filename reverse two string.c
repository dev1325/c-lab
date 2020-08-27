#include <stdio.h>
#include <string.h>
void reverse_string(char*, int, int);


 
 void reverse(char *b)
 {
   char j[20];
   int i,b,k;
   for(i=0;*(b+i)!='\0';i++)
     {
      j[i]=*(b+i);
     }
     i--;
   for(int k=0;k<20,i>=0;k++,i--)
    {
     *(b+k)=j[i];
    } 
 }



void main()
 {
  char *end,start[20];
  end=start;
  printf("enter a string  :");
  scanf("\n%s",end);
  reverse (end);
  printf("%s\n",end);
 }