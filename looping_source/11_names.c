#include <stdio.h>
main() 
{
    char name[50];
    int i;
    for (i = 1; i <= 5; i++) 
	{
        printf("Enter name :");
        scanf("%s",&name);
    }
    for(i=1;i<=5;i++)
    {
    	printf("\nName is:%s",name);
	}
}
