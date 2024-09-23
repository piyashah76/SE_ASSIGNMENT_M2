#include <stdio.h>

n#include <stdio.h>
#include <ctype.h> // For isalpha(), isdigit(), and isspace() functions

int main() {
    char str[100]; // Array to hold the input string
    int alphabets = 0, digits = 0, specialChars = 0;
    int i;

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Count alphabets, digits, and special characters
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) { // Ignore spaces
            specialChars++;
        }
    }

    // Display the counts
    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialChars);

    return 0;
}

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    if (*str1 == *str2) {
        return 0; 
    }
    
    else if (*str1 < *str2) {
        return -1; 
    }
    
    else {
        return 1; 
    }
}

int main() {
    char str1[100], str2[100]; 

    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    
    int result = compareStrings(str1, str2);

    
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

