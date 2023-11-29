#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "player.h"


// Returns the string representation of 'player'
char* get_player_name(Player player) {
    char* str = malloc(10);
     // checking if memory was allocated correctly
    if (str == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }

    PlayerType player_type = player.player_type;
    switch (player_type) {
        case COMPUTER:
            strncpy(str, "COMPUTER", 8);
            break;
        case PLAYER:
            strncpy(str, "PLAYER", 6);
            break;
        default:
            return NULL;
            break;
    }
    return str;
}
