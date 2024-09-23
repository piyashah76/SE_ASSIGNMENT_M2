#include <stdio.h>
#include <stddef.h> 


struct Employee {
    int empno;
    char empname[50];
    float salary;
};


union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
   
   
   
   
    struct Employee emp;
    
   
    union Data data;
    
    
    emp.empno = 101;
    snprintf(emp.empname, sizeof(emp.empname), "John Doe");
    emp.salary = 55000.50;
    
   
    data.intValue = 10;
    data.floatValue = 20.5;  
    data.charValue = 'A';    
    
   
    printf("Structure Employee:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Salary: %.2f\n", emp.salary);
    printf("Size of structure: %lu bytes\n", sizeof(emp));
    printf("Offsets: empno = %lu, empname = %lu, salary = %lu\n",
           offsetof(struct Employee, empno),
           offsetof(struct Employee, empname),
           offsetof(struct Employee, salary));
    
    
    printf("\nUnion Data:\n");
    printf("Int Value: %d\n", data.intValue); 
    printf("Float Value: %.2f\n", data.floatValue);
    printf("Char Value: %c\n", data.charValue); 
    printf("Size of union: %lu bytes\n", sizeof(data));
    
    return 0;
}

