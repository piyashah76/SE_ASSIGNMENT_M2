#include <stdio.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};


union Data {
    int id;
    char name[50];
    float salary;
};

int main() {
    
    struct Employee emp;
    emp.id = 1;
    snprintf(emp.name, sizeof(emp.name), "John Doe");
    emp.salary = 50000.50;

    
    union Data data;
    data.id = 1; 

  
    printf("Structure:\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

   
    printf("\nUnion:\n");
    data.id = 1;
    printf("Union ID: %d\n", data.id);
    
    snprintf(data.name, sizeof(data.name), "John Doe");
    printf("Union Name: %s\n", data.name); 
    printf("Union Salary: %.2f\n", data.salary);

    return 0;
}

