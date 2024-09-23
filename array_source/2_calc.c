#include <stdio.h>
main() 
{
    int choice, size, i;
    float num[2], result;
	printf("Enter the size of the array (2): ");
    scanf("%d", &size);
	float arr[size];
	printf("Enter %d numbers: ", size);
    for(i = 0; i < size; i++) 
	{
        scanf("%f", &arr[i]);
    }

    do
	{
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                result = 0;
                for (i = 0; i < size; i++) 
				{
                    result += arr[i];
                }
                printf("The result is: %f\n", result);
                break;
            case 2:
                result = arr[0];
                for (i = 1; i < size; i++) 
				{
                    result -= arr[i];
                }
                printf("The result is: %f\n", result);
                break;
            case 3:
                result = 1;
                for (i = 0; i < size; i++) 
				{
                    result *= arr[i];
                }
                printf("The result is: %f\n", result);
                break;
            case 4:
                result = arr[0];
                for (i = 1; i < size; i++) 
				{
                    if (arr[i] != 0)
					 {
                        result /= arr[i];
                    } 
					else 
					{
                        printf("Error: Division by zero is not allowed.\n");
                        break;
                    }
                }
                printf("The result is: %f\n", result);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("Do you want to continue? (y/n): ");
        char again;
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
}
