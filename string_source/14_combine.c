#include <stdio.h>

#define MAX_LENGTH 200


void concatenate(char *dest, const char *src) {
 
    while (*dest != '\0') {
        dest++;
    }
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
 
    *dest = '\0';
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

  
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

  
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

  
    concatenate(str1, str2);

    
    printf("Combined string: %s\n", str1);

    return 0;
}

