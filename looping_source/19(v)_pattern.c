#include <stdio.h>

main() 
{
    int n = 5,i; 
    char ch;
    for (i = 1; i <= n; i++) 
	{
    	for (ch = 'A'; ch < 'A' + i; ch++) 
		{
            printf("%c", ch);  
        }
        printf("\n");  
    }
}

