#include <stdio.h>
main() 
{
    int n, sum = 0, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (i <= n) 
	{
        sum += i;
        i++;
    }
	printf("Sum of natural numbers up to %d is %d\n", n, sum);
}
