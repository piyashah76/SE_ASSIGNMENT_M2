#include <stdio.h>
#include <string.h>

void reverse_string(char* str, int length) 
{
    if (length == 0) 
	{
        return;
    }
    printf("%c", str[length - 1]);
    reverse_string(str, length - 1);
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    printf("Reverse of the string is: ");
    reverse_string(str, strlen(str));
}
