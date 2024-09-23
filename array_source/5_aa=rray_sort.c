#include <stdio.h>


void sortAscending(int arr[], int size) 
{
    int temp;
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void sortDescending(int arr[], int size) 
{
    int temp;
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size1, size2;
    int choice;
    
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++)
	 {
        scanf("%d", &arr1[i]);
    }
    
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) 
	{
        scanf("%d", &arr2[i]);
    }
    
    
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    
    if (choice == 1) 
	{
        sortAscending(arr1, size1);
        printf("First array sorted in ascending order:\n");
        printArray(arr1, size1);
        
        sortAscending(arr2, size2);
        printf("Second array sorted in ascending order:\n");
        printArray(arr2, size2);
    } 
	else if (choice == 2) 
	{
        sortDescending(arr1, size1);
        printf("First array sorted in descending order:\n");
        printArray(arr1, size1);
        
        sortDescending(arr2, size2);
        printf("Second array sorted in descending order:\n");
        printArray(arr2, size2);
    } else
	 {
        printf("Invalid choice.\n");
    }
    
    return 0;
}

    

