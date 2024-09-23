#include <stdio.h>

 main()
{
    int num = 1;  
    int n = 5,i,j;    

    for (i = 1; i <= n; i++) 
	{
        
        for (j = 1; j <= i; j++) 
		{
            printf("%d", num);
            num++;  
        }
        printf("\n");
    }
}

