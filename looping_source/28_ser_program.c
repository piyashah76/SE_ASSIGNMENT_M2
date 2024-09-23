#include <stdio.h>

main() 
{
    int n,i, term = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 3;
        } 
		else 
		{
            term *= 2; 
        }
    }

    printf("\n");
}

