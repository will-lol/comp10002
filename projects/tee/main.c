#include <assert.h>
#include <stdio.h>

#define MAX_FILES 10

int main(int argc, char *argv[]) {
  int n = argc - 1;
  assert(n <= 10);

  char **filenames = &argv[1];
  char c;
  FILE *files[10];

  for (int i = 0; i < n; i++) {
    files[i] = fopen(filenames[i], "w");
  }

  while ((c = fgetc(stdin)) != EOF) {
    fputc(c, stdout);
    for (int i = 0; i < n; i++) {
      fputc(c, files[i]);
    }
  }

  for (int i = 0; i < n; i++) {
    fclose(files[i]);
  }

  return 0;
}
