#include <stdio.h>
main() 
{
    int num, max;
    printf("Enter a number: ");
    scanf("%d", &num);
    max = num % 10;
    while (num != 0) 
	{
        int digit = num % 10;
        if (digit > max) 
		{
        	max = digit;
        }
        num /= 10;
    }
    printf("Maximum digit: %d\n", max);
}
