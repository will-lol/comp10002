#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *file = fopen(argv[1], "wb+");
  fseek(file, 100000, 0);
  fputc('\n', file);
  fclose(file);
}
