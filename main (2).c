/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void copyarray()
{
    int a[5],b[5],i=0;
    int *ptr1,*ptr2; ptr1=a; ptr2=b;
    printf("Enter array of 5 elements : \n");
    for(;i<5;i++)
    scanf("%d",&*(ptr1+i));
    for(i=0;i<5;i++)
    {*(ptr2+i)=*(ptr1+i);
    printf("%d ",*(ptr2+i));}
    
