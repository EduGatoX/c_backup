#ifndef PLAYER_MODULE
#define PLAYER_MODULE


#include "rockpaperscissors.h"


typedef enum PlayerType {
    COMPUTER, PLAYER
} PlayerType;


typedef struct Player {
    PlayerType player_type;         // The player type
    RockPaperScissors hand;         // The hand selection of current round
    int score;                      // The score through the game
} Player;


// Returns the string representation of 'player'
char* get_player_name(Player player);


#endif
