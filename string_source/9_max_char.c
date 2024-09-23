#include <stdio.h>

int main() {
    char str[100]; 
    char maxChar;
    int i;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

  
    maxChar = str[0];

  
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] > maxChar) {
            maxChar = str[i];
        }
    }

   
    printf("The maximum character in the string is: %c\n", maxChar);

    return 0;
}

