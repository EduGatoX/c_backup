#include <stdio.h>

enum DaysOfWeek {
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO,
};

int main(){
    // this is difficult to remember, especially when the number of cases can be huge
    int month = 6; // June
    int day = 1; // Monday
    
    enum DaysOfWeek day_of_week;
    day_of_week = MIERCOLES;

    printf("%d\n", day_of_week);

    return 0;
}
