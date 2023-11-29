#ifndef EMPLOYEE    // If EMPLOYEE is not defined
#define EMPLOYEE    // then define EMPLOYEE (this is a guard)
                    // It makes the compiler define this header
                    // file only once.

// # pragma once    // this is a newer way to do this
                    //  but it is not supported by every compiler

typedef enum Position {
    ANALYST, DEVELOPER, SYSTEMS
} Position;

typedef struct Employee {
    char name[30];
    char last_name[40];
    char id[9];
    Position position;
} Employee;


void print_employee(Employee* e);

#endif
