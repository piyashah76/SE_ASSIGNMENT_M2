#include <stdio.h>

main() 
{
    int n = 20,i; 
    for (i = 1; i <= n; i++) 
	{
        printf("%02d ", i);
        if (i % 10 == 0) 
		{
            printf("\n");
        }
    }
}

