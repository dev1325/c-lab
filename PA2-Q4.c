//C program that will read in a sequence of ASCII characters and write out a sequence of encoded characters in its place. If a character is a letter or a digit, we will replace it with the next character in the character set, except that Z will be replaced by A, z by a, and 9 by 0. Thus 1 becomes 2, C becomes D, p becomes q, and so on. Any character other than a letter or a digit will be replaced by a period (.)

#include<stdio.h>
void clrscr()
 {
  system("clear");         //clear screen function
 }
void main()
 {
  char a,c;                   //variable declaration
  clrscr();               //clear screen function call
  printf("Enter a character : ");
  scanf("%c",&c);
  a=c;
  if((a>='A' || a>='a') && (a>='Z' || a<='z'))
    {
     if(a=='z' || a=='Z') 
      {
       a-=25;
      }
     else 
      {
       a++;
      } 
    }
  else if(a>='0' && a<='9')
    {
      if(a=='9') 
       {
        a-=9;
       }
      else 
       {
        a++;
       } 
    }
  else
    {
     a='.';
    }
 printf("\nCharacter entered :%c",c);
 printf("\nCharacter changed :%c\n",a);

 } 
     
