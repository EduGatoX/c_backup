#include <stdio.h>
#include <stdlib.h>

#define WORD_LENGTH 10
#define NUMBER_WORDS 3

int main() {
 
 const char words[NUMBER_WORDS][WORD_LENGTH] = {
     "hola",
     "caca",
     "pichi",
 };

 for (int i = 0; i < NUMBER_WORDS; i++) {
   printf("%s\n", words[i]);
 }

  /* const char *a[2];

   a[0] = "blah";
   a[1] = "puff";

   for (int i = 0; i < 2; i++) {
     printf("%s\n", a[i]);
   }*/
}
