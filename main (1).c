/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX 5
void copyArray(int *a,int *b,int s)
{
    int i;
    for(i=0;i<s;i++)
       *(b+i)=*(a+i);
    
}
int main()
{
    int a[MAX],b[MAX];
    int i;
    
    for(i=0;i<MAX;i++)
       *(a+i)=i+10;
      
    copyArray(a,b,MAX);
    
    for(i=0;i<MAX;i++)
       printf("\t %d",*(b+i));

    return 0;
}
