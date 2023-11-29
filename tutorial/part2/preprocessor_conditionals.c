#include <stdio.h>

#define LIMIT 80

/*
 * PREPROCESSOR CONDITIONALS
 * This is a conditinal that is resolved at compile time, which means
 * that you can direct the compiler to which section of the code is
 * compiled and which is not.
 * */

int main(){
    #if LIMIT < 50
        printf("Limit below 50\n");
    #else
        printf("Limit is greater than or equal to 50\n");
    #endif

        return 0;
}

