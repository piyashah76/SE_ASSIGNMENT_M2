#include <stdio.h>
main() 
{
    int num1, num2, num3, max;
	printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
	if(num1 >= num2 && num1 >= num3)
	{
		printf("max num is: %d",num1);
	}
    else if (num2 >= num1 && num2 >= num3)
    {
		printf("max num is:%d",num2);
	}
    else
    {
		printf("max num is : %d",num3);
	}
}
