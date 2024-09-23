#include <stdio.h>
main() 
{
    float km, meters;
	printf("Enter distance in kilometers: ");
    scanf("%f", &km);
	meters = km*1000;
	printf("%.2f kilometers is equal to %.0f meters.\n", km, meters);
}
