#include <stdio.h>

int main() {
    char str[100]; 
    int i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    
    printf("Individual characters in the string:\n");
    for (i = 0; i < len; i++) {
        printf("Character %d: %c\n", i + 1, str[i]);
    }

    return 0;
}

