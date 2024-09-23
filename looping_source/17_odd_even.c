#include <stdio.h>
main() 
{
    int i = 1, num,even=0, odd=0;
    while (i <= 5) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);
		if (num % 2 == 0) 
		{
            even++;
        } 
		else 
		{
            odd++;
        }

        i++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
}
