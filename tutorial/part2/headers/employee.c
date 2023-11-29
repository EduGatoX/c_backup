#include <stdio.h>
#include "employee.h"


void print_employee(Employee* e) {
    char* position;

    printf("+------- Employee -----------------------------------------+\n");
    printf("|      Name :   %-40s   |\n", e->name);
    printf("| Last Name :   %-40s   |\n", e->last_name);
    printf("|       PID :   %-40s   |\n", e->id);
    switch (e->position) {
        case ANALYST: position = "Analyst"; break;
        case DEVELOPER: position = "Developer"; break;
        case SYSTEMS: position = "Systems"; break;
    }
    printf("|  Position :   %-40s   |\n", position);
    printf("+----------------------------------------------------------+\n");
}
