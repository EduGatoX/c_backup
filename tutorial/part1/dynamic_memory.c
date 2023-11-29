#include <stdio.h>
#include <stdlib.h> // it has functions for working with dynamic memory

void print_values(float* values, int size){
    
    for(int i = 0; i < size; i++){
        printf("Value #%d = %f\n", i, values[i]);
    }
}

int main(){
    /*
    float* ptrValues = (float*) malloc(4000*sizeof(float)); // we are allocating memory for 4000 entries of type float
                                                            // malloc returns a void* (a pointer with no specific type)
                                                            // so we need to type cast it in order to use it with the type
                                                            // we want (in this case a float* pointer)
    */

    /*
     * One important thing about dynamic memory allocation (malloc) is that the system
     * doesn't free the memory automatically during the execution of the program, thus,
     * it is our job to manually free the allocated memory after its use.
     */
    
    // we are doing it now by asking the user
    printf("How many items you want to store? => ");
    int size;
    scanf("%d", &size); // remember that scanf needs a pointer as argument of the 
                        // same type of the placeholder (in this of type int*)

    // Allocating memory
    float* values = (float*) malloc(size * sizeof(float));
    if (values == NULL){
        printf("Insufficient memory for allocation\n");
        return -1;
    }

    for (int i = 0; i < size; i++){
        values[i] = 10;
    }

    print_values(values, size);
        
    // Now we free the memory after being used
    free(values) // after freeing the memory 'values' is no longer useful.

    printf("Operation completed successfully\n");

    return 0;
}
