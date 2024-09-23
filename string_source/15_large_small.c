#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000
#define MAX_WORD_LENGTH 100


void findLargestAndSmallestWords(char *str, char *largest, char *smallest) {
    char word[MAX_WORD_LENGTH];
    int i = 0, j = 0;


    largest[0] = '\0';
    smallest[0] = '\0';

    while (str[i] != '\0') {
     
        while (isspace(str[i])) {
            i++;
        }

        
        j = 0;
        while (str[i] != '\0' && !isspace(str[i])) {
            word[j++] = str[i++];
        }
        word[j] = '\0';

       
        if (j > 0) {
           
            if (largest[0] == '\0' || strlen(word) > strlen(largest)) {
                strcpy(largest, word);
            }

           
            if (smallest[0] == '\0' || strlen(word) < strlen(smallest)) {
                strcpy(smallest, word);
            }
        }
    }
}

int main() {
    char str[MAX_LENGTH];
    char largest[MAX_WORD_LENGTH];
    char smallest[MAX_WORD_LENGTH];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    findLargestAndSmallestWords(str, largest, smallest);

  
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}

