/*
 * The preoprocessor reads every line of the script and transform it
 * to pass it to the compiler.
 * */

#include <stdio.h>  // include search the file 'stdio.h' in usr/include (in linux)
                    // and the preprocessor appends the content of that file into
                    // this file for further processing

// #define X Y      // define subtitutions, X is an identifier used by the proprocessor
                    // and Y is the value that defines X.

#define LIMIT 100  // In this case, whenever the preprocessor reads LIMIT it is replaced
                   // by the value 100.


int main(int argc, char** argv){

    printf("The value of LIMIT = %d\n", LIMIT);
   
    #undef LIMIT // undef will erase the previous define LIMIT 100

    #define LIMIT 120 // and now we can replace the value of LIMIT to 120

    printf("The value of LIMIT = %d\n", LIMIT);

    return 0;
}
