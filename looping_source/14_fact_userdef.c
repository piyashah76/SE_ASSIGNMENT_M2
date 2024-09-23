#include <stdio.h>
main() 
{
    int i, num[5], factorial;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 5; i++) 
	{
        factorial = 1;
        int j = 1;
        while (j <= num[i]) 
		{
            factorial *= j;
            j++;
        }
        printf("Factorial of %d is %d\n", num[i], factorial);
    }
}

    
