#include<stdio.h>
main()
{
	int salary,amt;
	float p=0.1,l=0.1;
	printf("Enter monthly salary:");
	scanf("%d",&salary);
	amt=salary-p-l;
	printf("Remaining salary: %d",amt);
	
}
