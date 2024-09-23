#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swapping using temporary variable a: %d b: %d",a,b);

	printf("\nswapping without temporary variable a: %d b: %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
}
