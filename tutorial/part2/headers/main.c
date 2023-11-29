#include <stdio.h>
#include <string.h>
#include "employee.h"
#include "salaries.h"


int main() {
    Employee e;

    strncpy(e.name, "Pepito", 30);
    strncpy(e.last_name, "Perez", 40);
    strncpy(e.id, "223178", 9);
    e.position = ANALYST;

    print_employee(&e);
    pay_salary(&e);

    return 0;
}
