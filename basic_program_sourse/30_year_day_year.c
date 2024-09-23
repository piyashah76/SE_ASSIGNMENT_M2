#include <stdio.h>
main()
{
    int days, years, weeks;
    printf("Enter days:");
    scanf("%d",&days);
	years = days/365; 
    printf("Years: %d\n", years);
    printf("enter years:");
    scanf("%d",&years);
    days=years*365;
    printf("Days :%d\n",days);
}
