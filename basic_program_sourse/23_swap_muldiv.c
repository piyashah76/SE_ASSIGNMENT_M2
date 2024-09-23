#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	c=a*b;
	a=c/b;
	b=c/a;
	
	printf("swapping using temporary variable a: %d b: %d ",a,b);
	
}

