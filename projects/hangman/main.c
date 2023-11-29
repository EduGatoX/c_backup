#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <unistd.h>

#define MAX_TRIES 3

#define WORD_LENGTH 10
#define NUMBER_WORDS 10

// Returns a random integer between low and high (exclusive)
int rand_int(int low, int high) { return low + rand() % (high - low); }

// Returns the length of the string
unsigned int str_len(char *str) {
  unsigned int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}

// Prints the hangman at each stage.
void print_hangman(int stage) {
  printf("________\n");
  printf("        |\n");
  printf("        |\n");
  if (stage >= 1)
    printf("        O\n");
  if (stage >= 2)
    printf("       \\|/\n");
  if (stage >= 3)
    printf("       / \\ \n");
}

int main() {
  // set time for random number generation
  srand(time(NULL));

  // Initialize the dictionary
  char words[NUMBER_WORDS][WORD_LENGTH] = {
      "hola", "caca",  "pichi", "peo",   "loco",
      "moco", "pelao", "mojon", "curao", "paralelep",
  };

  // Greet
  printf("*** Welcome to HANGMAN ***\n");
  printf("\nHere are the rules\n");
  printf("1) You need to guess the word, entering one letter at a time\n");
  printf("2) You have %d tries\n", MAX_TRIES);
  printf("3) Failing %d times means you are hanged!\n", MAX_TRIES);
  printf("Enjoy\n");

  // Select a random word from words for playing
  int index = rand_int(0, NUMBER_WORDS);
  char *word = &(words[index][0]);
  int len = str_len(word);

  // Mainloop
  int stage = 0;
  while (stage <= 3) {
    print_hangman(stage);
    stage++;
  }
  /*
    int i = 0;
    while (i < 10) {
      // selecting word
      int index = rand_int(0, NUMBER_WORDS);
      char *word = &(words[index][0]);
      printf("%s\n", word);

      i++;
    }
  */
  for (int i = 0; i < NUMBER_WORDS; i++) {
    printf("len of %s = %d\n", words[i], str_len(&words[i][0]));
  }
  /*
   for (int stage = 1; stage <= MAX_TRIES; stage++) {
     print_hangman(stage);
     sleep(1);
   }
 */
  return 0;
}
