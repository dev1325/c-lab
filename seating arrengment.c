#include <stdio.h>
 
int main()
{
	int z,num,a,T;
	scanf("%d",&T);
	while(z>0)
	{
	scanf("%d", &num);  
	if(num==0) 
    {
        exit(0);            			 
    }
    a=(num%12);
	switch(a)
	{
      case 0 : num = (num-11);
	          printf("%d WS \n",num);
	          break;
	  case 1 : num = (num+11);
	          printf("%d WS \n",num);
			  break;	  
      case 2 : num = (num+9);
	          printf("%d MS \n",num);
			  break;
	  case 3 : num = (num+7);
	          printf("%d AS \n",num);
			  break;
	  case 4 : num = (num+5);
	          printf("%d AS \n",num);
			  break;
	  case 5 : num = (num+3);
	          printf("%d MS \n",num);
	          break;
	  case 6 : num = (num+1);
	          printf("%d WS \n",num);
			  break;	  
      case 7 : num = (num-1);
	          printf("%d WS \n",num);
			  break;
	  case 8 : num = (num-3);
	          printf("%d MS \n",num);
			  break;
	  case 9 : num = (num-5);
	          printf("%d AS \n",num);
			  break;
	  case 10 : num = (num-7);
	          printf("%d AS \n",num);
			  break;
	  case 11 : num = (num-9);
	          printf("%d MS \n",num);
			  break;
	  default : break;		  		  		  
			  		  		  
	}
	z--;
	     }     
}