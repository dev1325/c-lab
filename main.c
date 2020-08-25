/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    int *ptr1,*ptr2,ptr3;
    
    ptr1=&num1;
    ptr2=&num2;
    ptr3=&num3;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    printf("Enter the 3rd number : ");
    scanf("%d",&num3);
   
    num3=num1;
    num1=num2;
    num2=num3;
    
    printf("The 1st number is : %d",num1);
    printf("The 2nd number is : %d",num2);
    printf("The 3rdnd number is : %d",num3);
return(0);
}

