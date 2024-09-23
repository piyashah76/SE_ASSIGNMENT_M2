#include <stdio.h>


void copyString(const char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; 
}

int main() {
    char source[100], destination[100]; 

    
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    int length = 0;
    while (source[length] != '\0') {
        length++;
    }
    if (source[length - 1] == '\n') {
        source[length - 1] = '\0';
    }

    copyString(source, destination);

    
    printf("Copied string: %s\n", destination);

    return 0;
}

