#include <stdio.h>
main()
{
    int minutes, seconds, hours;
	printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    hours = minutes / 60;
	printf("%d minutes is %d hour and %d seconds\n", minutes, hours, seconds);
}
