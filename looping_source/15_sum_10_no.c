#include <stdio.h>
main() 
{
    int i = 1, num, sum = 0;
    printf("Enter 10 numbers: ");
    while (i <= 10) 
	{
        scanf("%d", &num);
        sum += num;
        i++;
    }
	printf("Sum of the 10 numbers is %d\n", sum);
}
