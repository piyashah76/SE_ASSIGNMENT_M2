#include <stdio.h>
main() 
{
    float basic_salary, hra, da, gross_salary;
	printf("Enter basic salary: ");
    scanf("%f", &basic_salary); 
	if (basic_salary <= 10000) 
	{
        hra=basic_salary * 0.20;
        da=basic_salary * 0.80;
    } 
	else if (basic_salary <= 20000) 
	{
        hra=basic_salary * 0.25;
        da=basic_salary * 0.90;
    } 
	else 
	{
        hra=basic_salary * 0.30;
        da=basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;

    printf("Basic Salary: Rs. %.2f\n", basic_salary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("Gross Salary: Rs. %.2f\n", gross_salary);
}
