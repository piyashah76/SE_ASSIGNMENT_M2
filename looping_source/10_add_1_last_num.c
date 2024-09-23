#include <stdio.h>
main() 
{
    int num, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10) 
	{
        num /= 10;
    }
    first = num;
    sum = first + last;
    printf("Summation of first and last digit: %d\n", sum);
}
