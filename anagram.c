#include<stdio.h>
 
int main()
{
 int t, i, x, y, R, C;
 char a[9999], b[9999];
 scanf("%d", &t);
 for(i=0; i<t; i++)
    {
	R=0;C=0;
	scanf("%s",&a);
	scanf("%s",&b);
 
	for(x=0; a[x] != '\0'; x++)
      {
      for(y=0; b[y] != '\0'; y++)
	   {
        if(a[x]==b[y])
		 {
           C++;
		   b[y]=' ';
		   break;
		 }
	   }
      }
		R = (strlen(a)-C) + (strlen(b)-C);
		printf("%d \n", R);
    }
return 0;
}