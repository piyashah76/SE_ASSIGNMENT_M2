#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE]; 
    int i;


    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    printf("\nChecking if numbers are even or odd:\n");
    for (i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Number %d is even.\n", numbers[i]);
        } else {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }

    return 0;
}

