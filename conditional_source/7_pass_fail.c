#include <stdio.h>
main() 
{
    int marks;
	printf("Enter your marks: ");
    scanf("%d", &marks);
	if (marks >= 40)
	{
        printf("You have passed with %d marks", marks);
    } 
	else 
	{
        printf("You have failed with %d marks", marks);
    }
}
