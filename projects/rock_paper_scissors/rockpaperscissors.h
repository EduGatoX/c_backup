#ifndef ROCKPAPERSCISSORS_MODULE
#define ROCKPAPERSCISSORS_MODULE


typedef enum RockPaperScissors{
    ROCK, PAPER, SCISSORS
} RockPaperScissors;


// Returns an enum of RockPaperScissors that depends on 'i'
RockPaperScissors get_selection(int i);


// Returns the string representation of 'selection'
char* get_selection_name(RockPaperScissors selection);


#endif
