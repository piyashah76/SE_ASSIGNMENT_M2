#include <stdio.h>
main() 
{
    int i=1,num,reversedNum=0,remainder,originalNum;
    while (i <= 3) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        originalNum = num;
        while (num != 0)
		{
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }
        if (originalNum == reversedNum) 
		{
            printf("Number %d is a palindrome.\n", originalNum);
        } 
		else 
		{
            printf("Number %d is not a palindrome.\n", originalNum);
        }
		i++;
        reversedNum = 0;
    }
}
