#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE]; 
    int sum = 0;
    int i;

    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    for (i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }

    
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}

