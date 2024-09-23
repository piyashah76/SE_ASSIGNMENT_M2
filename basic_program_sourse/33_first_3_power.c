#include <stdio.h>
main() 
{
    int n;
	printf("Enter an integer: ");
    scanf("%d", &n);
	printf("The first three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, n);
    printf("%d^2 = %d\n", n, n*n);
    printf("%d^3 = %d\n", n, n*n*n);
}
