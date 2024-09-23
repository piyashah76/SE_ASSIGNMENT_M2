#include<stdio.h>
main()
{
	int a,b,c,d,e,tot,avg;
	printf("Enter expense of electricity bill:");
	scanf("%d",&a);
	printf("Enter expense of water bill:");
	scanf("%d",&b);
	printf("Enter expense of maintanance bill:");
	scanf("%d",&c);
	printf("Enter expense of gas bill:");
	scanf("%d",&d);
	printf("Enter expense of fuel bill:");
	scanf("%d",&e);
	tot=a+b+c+d+e;
	avg=tot/2;
	printf("Average of expense is:%d",avg);
}
