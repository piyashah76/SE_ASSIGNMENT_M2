#include <stdio.h>
main()
{
    int num;
	printf("Enter a number: ");
    scanf("%d", &num);
	printf("%d is %s", num, (num % 2 == 0) ? "even" : "odd");
	}
