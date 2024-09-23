#include <stdio.h>
#include <string.h> 

void extractSubstring(const char *source, int start, int length, char *destination) {
    int i;
    int sourceLen = strlen(source);

   
    if (start < 0 || start >= sourceLen || length < 0) {
        destination[0] = '\0'; 
        return;
    }

   
    for (i = 0; i < length && (start + i) < sourceLen; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0';
}

int main() {
    char source[100]; 
    char substring[100]; 
    int start, length;

    
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

   
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
    }

    
    printf("Enter the starting index: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    
    extractSubstring(source, start, length, substring);

    
    printf("Extracted substring: %s\n", substring);

    return 0;
}

