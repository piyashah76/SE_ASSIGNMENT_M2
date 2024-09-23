#include <stdio.h>

main() 
{
    int n = 5,i,j; 

    
    for (i = 1; i <= n; i++) 
	{
        
        for (j = i; j < n; j++) 
		{
            printf(" ");
        }
    
        for (int j = 1; j <=i - 1; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
}

