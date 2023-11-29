#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "rockpaperscissors.h"


// Returns an enum of RockPaperScissors that depends on 'i'
RockPaperScissors get_selection(int i){
    switch(i){
        case 0: return ROCK; break;
        case 1: return PAPER; break;
        case 2: return SCISSORS; break;
        default: return -1; break;
    }
}


// Returns the string representation of 'selection'
char* get_selection_name(RockPaperScissors selection){
    char* str = malloc(10);
    // checking if memory was allocated correctly
    if (str == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    switch (selection){
        case ROCK: strncpy(str, "ROCK", 4); break;
        case PAPER: strncpy(str, "PAPER", 5); break;
        case SCISSORS: strncpy(str, "SCISSORS", 8); break;
        default: return NULL; break;
    }
    return str;
}
