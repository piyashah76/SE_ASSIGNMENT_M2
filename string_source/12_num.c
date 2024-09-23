#include <stdio.h>
#include <string.h> 

int main() {
    char str[100]; 
    char word[] = "is"; 
    char *pos; 
    int count = 0; 
    int wordLength = strlen(word); 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    pos = str;
    while ((pos = strstr(pos, word)) != NULL) {
        count++;
        pos += wordLength; 
    }

   s
    printf("The word '%s' appears %d times in the string.\n", word, count);

    return 0;
}

