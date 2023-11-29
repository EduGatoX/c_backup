#include <stdio.h>
#include <string.h>

enum EmployeeType {
    ANALYST, PROGRAMMER,
};

struct Employee {
    char name[20];
    char last_name[20];
    char id[10];
    char phone_number[10];
    enum EmployeeType e_type;
};

// typedef is used to create an alias of structs, enums or unions
typedef struct Employee Employee;

void print_data(Employee* employee){
    printf("%s %s\n", employee -> name, employee -> last_name);
    printf("ID number: %s\n", employee -> id);
    printf("Phone Number: %s\n", employee -> phone_number);

    if (employee -> e_type){
        printf("This employee is a analyst\n");
    }
    else {
        printf("This employee is a programmer\n");
    }
}

int main(){
    Employee employee;
    strncpy(employee.name, "Juan", strlen("Juan") + 1);
    strncpy(employee.last_name, "Perez", strlen("Perez") + 1);
    strncpy(employee.id, "00000014Z", strlen("00000014Z") + 1);
    strncpy(employee.phone_number, "912345678", strlen("912345678") + 1);

    print_data(&employee);

    return 0;
}

