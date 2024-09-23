#include <stdio.h>
main() 
{
    int num, i = 1, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
	while (i <= num) 
	{
        factorial*= i;
        i++;
    }
	printf("Factorial of %d is %d\n", num, factorial);
}
