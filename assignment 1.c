#include <stdio.h>

int main(void)
{
    int i;
    char *x;
    char p[50];
    x=p;
    printf("Enter a string :");
   gets(p);

    for (i=0;*(x+i)!='\0';i++)
     {
        if(*(x+i)==' ')
         {
             printf("\n");
         }
         else
         {
             printf("*");
         }
     }
