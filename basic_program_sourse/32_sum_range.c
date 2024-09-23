#include <stdio.h>
main() 
{
    int num1, num2, sum;
	printf("Enter first number: ");
    scanf("%d", &num1);
	printf("Enter second number: ");
    scanf("%d", &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is %d.\n", num1, num2, sum);
	if(sum >= -32768 && sum <= 32767) 
	{
        printf("The sum is within the range of a short integer.\n");
    } 
	else if (sum >= -2147483648 && sum <= 2147483647) 
	{
        printf("The sum is within the range of an integer\n");
    } 
	else 
	{
        printf("The sum is too large and exceeds the range of an integer.\n");
    }
}
