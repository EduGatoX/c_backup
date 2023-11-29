#include <stdio.h>

/*
 * MACROS
 * Sometimes there are function calls that are repetitive
 * but simple, and they are cumbersome for the processor 
 * to execute because of jumps in memory and passing data
 * from different parts of the memory.
 * In this case we can use macros.
 * */

// Defining a macro
# define RECTANGLE_AREA(x, y) (x * y)

int rectangle_area(int width, int height){
    return width * height;
}


int main(){
    int width = 5, height = 4;

    /* calling a function
    printf("The area of the rectangle is %d x %d = %d.\n",
            width, height, rectangle_area(width, height));
    */

    // using a macro
    printf("The area of the rectangle is %d x %d = %d.\n",
            width, height, RECTANGLE_AREA(width, height));
    
    return 0;
}
