#include <stdio.h>

int findStringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];  

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int i = 0;
    while (str[i] != '\0')
	 {
        if (str[i] == '\n')
		 {
            str[i] = '\0';
            break;
        }
        i++;
    }

    
    int length = findStringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

