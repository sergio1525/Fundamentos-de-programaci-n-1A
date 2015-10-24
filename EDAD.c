#include <stdio.h>
int edad;
int main()
 {
	 printf("escoge tu edad");
	 scanf("%d", &edad);
 
	 if (edad>=1 && edad<=59)
    	{
    		
    		    if(edad>=19 && edad<=29)
    		{
    			if(edad>=13 && edad<=18)
    		{
    			if(edad>=1 && edad<=12)
   			{
                
  				printf("niño");
   			}
   			else
   			{
  				printf("adolescente");
   			}
    			
    		}
    		else
    		{
    			printf("adulto");
    		}
    			
    		}
    		else
    		{
    			printf("adulto mayor");
    		}
    		
	 return 0;
}
}
