#include <stdio.h>
main() 
{
    int height;
	printf("Enter your height: ");
    scanf("%d",&height);
	if (height < 150) 
	{
        printf("You are short");
    } 
	else if (height >= 150 && height < 165)
	{
        printf("You are average height");
    } 
	else if (height >= 165 && height < 180) 
	{
        printf("You are tall");
    } 
	else
	{
        printf("You are very tall");
    }
}
