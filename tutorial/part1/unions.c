#include <stdio.h>

// the union makes every field to point to the same memory location
// which means that only one field can be placed.
union MyUnion{
    int int_number;
    float float_number;
};

int main(){
    union MyUnion my_union;
    my_union.int_number = 123456789;
    my_union.float_number = 2.54e6;

    printf("Integer = %f\n", my_union.float_number);

    return 0;
}
