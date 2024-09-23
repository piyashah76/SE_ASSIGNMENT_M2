#include <stdio.h>
main() 
{
    int cus_id;
    char cus_name[50];
    float units_consumed, total_amount, surcharge;
	printf("Enter customer ID: ");
    scanf("%d",&cus_id);
	printf("Enter customer name: ");
    scanf("%s",&cus_name);
	printf("Enter units consumed: ");
    scanf("%f",&units_consumed);

    if (units_consumed <= 350) 
	{
        total_amount = units_consumed * 1.20;
        printf("\ntotal amount to be paid:%.2f",total_amount);
    } 
	else if (units_consumed >= 350 && units_consumed < 600) 
	{
        total_amount = 350 * 1.20 + (units_consumed - 350) * 1.50;
        printf("\ntotal amount to be paid:%f",total_amount);
    } 
	else if (units_consumed >= 600 && units_consumed < 800) 
	{
        total_amount = 350 * 1.20 + 250 * 1.50 + (units_consumed - 600) * 1.80;
        printf("\ntotal amount to be paid:%f",total_amount);
    } 
	else 
	{
        total_amount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units_consumed - 800) * 2.00;
        printf("\ntotal amount to be paid:%f",total_amount);
    }
	if (total_amount > 800) 
	{
        surcharge = total_amount * 0.18;
        total_amount += surcharge;
        printf("Surchrage : %f",surcharge);
    }

    if (total_amount < 256) 
	{
        total_amount = 256;
        printf("\nminimum bill:%f",total_amount);
    }

    printf("\nCustomer ID: %d\n", cus_id);
    printf("\nCustomer Name: %s\n", cus_name);
    printf("\nUnits Consumed: %.2f\n", units_consumed);
    printf("\nTotal Amount: Rs. %.2f\n", total_amount);
}
