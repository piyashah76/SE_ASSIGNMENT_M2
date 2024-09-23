#include <stdio.h>

int main() {
    char str[100];
    int length = 0; 
    int i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    t
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    
    printf("Characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

