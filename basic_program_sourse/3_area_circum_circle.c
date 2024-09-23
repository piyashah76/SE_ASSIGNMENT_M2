#include<stdio.h>
main()
{
	int r;
	float pi=3.14;
	printf("Enter radius:",r);
	scanf("%d",&r);
	printf("Area of circle is:%.2f",(pi*r*r));
	printf("\nCircumference of circle is: %.2f",(2*pi*r));
	
}
