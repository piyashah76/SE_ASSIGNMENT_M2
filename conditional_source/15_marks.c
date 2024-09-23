#include <stdio.h>
main() 
{
    int maths, phy, chem, total, total_mp;
	printf("marks of Physics: ");
    scanf("%d", &phy);
	printf("marks of Chemistry: ");
    scanf("%d", &chem);
	printf("marks of Mathematics: ");
    scanf("%d", &maths);
	total = maths + phy + chem;
    total_mp = maths + phy;
	printf("Total marks of Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks of Maths and Physics: %d\n", total_mp);
	if(maths >= 65 && phy >= 55 && chem >= 50 && (total >= 190 || total_mp >= 140)) 
	{
        printf("The candidate is eligible\n");
    } 
	else
	{
        printf("The candidate is not eligible\n");
    }
}

