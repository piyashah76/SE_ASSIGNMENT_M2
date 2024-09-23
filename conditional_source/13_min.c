#include <stdio.h>
main() 
{
    int a, b, c;
	printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
	int min = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;
	printf("The minimum number is: %d\n", min);
}
