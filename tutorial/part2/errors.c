#include <stdio.h>

int main(){
    int x = 5;
    if (x >= 10){
        #error "Don't compile this"
        printf("This will never be compiled");
    }else{
        printf("This can be compiled");   
    }

    return 0;
}

