#include <stdio.h>
main() 
{
    int a, b, c;
	printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
	int max = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
	printf("The maximum number is: %d\n", max);
}
