#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

size_t count_tokens(char const *s, char delimeter) {
  size_t tokens;
  bool inside_token;

  tokens = 0;
  inside_token = false;

  while (*s) { // *s != NULL
    inside_token = false;
    while (*s == delimeter && *s) {
      s++;
    }
    while (*s != delimeter && *s) {
      if (!inside_token) {
        tokens++;
        inside_token = true;
      }
      s++;
    }
  }

  return tokens;
}

/*
 * INPUT
 *
 * "___Hello_there,_ dude!""
 *
 * OUTPUT
 * v --->[0]---------->"Hello"
 *  |--->[1]---------->"there,"
 *  |--->[2]---------->"dude"
 * */
char **split(char const *s, char c) {
  size_t tokens = count_tokens(s, c);
  char **token_v;

  // malloc the space for all ptrs
  token_v = malloc((tokens + 1) * sizeof(char *));
  if (token_v == NULL)
    return NULL;

  token_v[tokens] = NULL; // sentinel in the last spot

  // Copy all the string in the correct position
  fill(token_v, s, c);
  return token_v;
}

int main(int ac, char **av) {
  size_t size = count_tokens("Hello World Man. Are you okay?", ' ');

  printf("The number of tokens is %zu\n", size);

  return 0;
}
