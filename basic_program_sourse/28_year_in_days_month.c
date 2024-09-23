#include<stdio.h>
main()
{
	int years,days,months;
	printf("Enter years:");
	scanf("%d",&years);
	days=years*365;
	months=years*12;
	pritnf("Days from years:%d",days);
	printf("Months from years:%d",months);
}
