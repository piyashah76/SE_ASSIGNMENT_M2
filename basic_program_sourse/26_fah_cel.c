#include<stdio.h>
main()
{
	float f,c;
	printf("Enter fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("celcius: %f",c);
}
