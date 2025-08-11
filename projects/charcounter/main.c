#include <stdio.h>

int main(int argc, char *argv[]) {
  fprintf(stderr, "Enter text: \n");

  int c;
  int lines = 0, chars = 0;

  while ((c = getchar()) != EOF) {
    chars++;
    if (c == '\n') {
      lines++;
    }
  }

  fprintf(stdout, "\nLines: %d\nChars: %d", lines, chars);

  return 0;
}
