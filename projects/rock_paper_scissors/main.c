#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>
#include <unistd.h>

#include "rockpaperscissors.h"
#include "player.h"


#define MAX_ROUNDS 3


// Returns a random number between 'lower_limit' and 'upper_limit'
int rand_int(int lower_limit, int upper_limit){
    return lower_limit + rand() % (upper_limit - lower_limit);
}


// Return the player that is the winner of this round and
// null if it is a tie.
Player* process_round(Player *player1, Player *player2){
    if ((player1->hand == ROCK && player2->hand == SCISSORS) 
            || (player1->hand == PAPER && player2->hand == ROCK)
            || (player1->hand == SCISSORS && player2->hand == PAPER)){
        // player 1 won this round
        return player1;
    } else if ((player2->hand == ROCK && player1->hand == SCISSORS) 
            || (player2->hand == PAPER && player1->hand == ROCK)
            || (player2->hand == SCISSORS && player1->hand == PAPER)){
        // player 2 won this round
        return player2;
    } else
        return NULL;
}

void increase_score(Player *player) {
    player->score++;
}

void print_round_menu(int round){
    printf("\n** Round #%d **\n", round);
    printf("Select hand:\n");
    printf("    1. Rock\n");
    printf("    2. Paper\n");
    printf("    3. Scissors\n");        
    printf("Select (1, 2, 3) => ");
}


int main(){
    srand(time(NULL));

    // Greet 
    printf("** Welcome to Rock-Paper-Scissors**\n");
    printf("The winner should win the best of %d rounds\n", MAX_ROUNDS);

    // Define Players
    Player computer;
    Player player;

    player.player_type = PLAYER;
    player.score = 0;
    computer.player_type = COMPUTER;
    computer.score = 0;

    // Mainloop
    int round = 1;
    while(round <= MAX_ROUNDS){
        // Player turn
        print_round_menu(round);

        int player_selection;
        scanf("%d", &player_selection);
        RockPaperScissors player_hand = get_selection(player_selection - 1);
        char *player_hand_name = get_selection_name(player_hand);
        player.hand = player_hand;

        printf("Player selected %s\n", player_hand_name);
        
        sleep(1);

        // Computer turn
        int computer_selection = rand_int(0, 3);
        RockPaperScissors computer_hand = get_selection(computer_selection);
        char *computer_hand_name = get_selection_name(computer_hand);
        computer.hand = computer_hand;

        printf("Computer selected %s\n", computer_hand_name);
      
        sleep(1);

        // Process current round
        Player *winner = process_round(&player, &computer);
        if (winner == NULL) // checking if there is a tie
            continue;
        
        increase_score(&winner); // increase score
        char *winner_name = get_player_name(*winner);
        printf("%s won this round\n", winner_name);
        
        sleep(1);
        
        // increment round for the next iteration
        round++;

        // Check if there is a winner of the whole game
        int winning_score = MAX_ROUNDS / 2 + 1;
        if (winner->score >= winning_score){
            printf("\n** %s is the Winner!! **\n", winner_name);
            // freeing dynamic memory
            free(player_hand_name);
            free(computer_hand_name);
            free(winner_name);
            break;
        }
        // freeing dynamic memory
        free(player_hand_name);
        free(computer_hand_name);
        free(winner_name);
    }   

    return 0;
}
