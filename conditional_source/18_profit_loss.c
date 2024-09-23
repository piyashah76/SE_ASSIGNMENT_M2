#include <stdio.h>
main()
{
    float cp, sp; 
	printf("Enter cost price: ");
    scanf("%f", &cp);
	printf("Enter selling price: ");
    scanf("%f", &sp);
	if (sp > cp)
	{
        float profit = sp - cp;
        printf("profit of Rs. %.2f\n", profit);
    } 
	else if (sp < cp)
	{
        float loss = cp - sp;
        printf("loss of Rs. %.2f\n", loss);
    }
	else
	{
        printf("No profit or loss.\n");
    }
}
