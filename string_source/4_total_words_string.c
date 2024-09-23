#include <stdio.h>
#include <ctype.h> 

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0; 
        } else if (inWord == 0) {
            inWord = 1; 
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100]; 


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int wordCount = countWords(str);

    
    printf("Total number of words: %d\n", wordCount);

    return 0;
}

