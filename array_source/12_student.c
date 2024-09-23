#include <stdio.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH]; 
    int i;

    
    printf("Enter the names of %d students:\n", MAX_STUDENTS);
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        
        size_t length = strlen(names[i]);
        if (length > 0 && names[i][length - 1] == '\n') {
            names[i][length - 1] = '\0';
        }
}

    
    printf("\nThe names of the students are:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

