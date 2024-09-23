#include <stdio.h>

main() {
    int n,i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
    }

    printf("Sum of squares: %d\n", sum);
}

