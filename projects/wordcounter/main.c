#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  fprintf(stderr, "Enter text: \n");

  int c;
  int prevchar = -1;
  int lines = 0, chars = 0, words = 0;

  while ((c = getchar()) != EOF) {
    chars++;
    if (c == '\n') {
      lines++;
    }

    if (isspace(c) && !isspace(prevchar)) {
      words++;
    }

    prevchar = c;
  }

  fprintf(stdout, "\nLines: %d\nChars: %d\nWords: %d", lines, chars, words);

  return 0;
}
