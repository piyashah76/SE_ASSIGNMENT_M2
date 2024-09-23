#include <stdio.h>
main() {
    int n,i,j, sum = 0, total_sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        sum = 0;
        for (j = 1; j <= i; j++) 
		{
            sum += j;
        }
        total_sum += sum;
    }

    printf("Sum of the series: %d\n", total_sum);
}

