#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100]; 
    char result[100]; 
    int i, j = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    
    printf("String with only alphabets: %s\n", result);

    return 0;
}

