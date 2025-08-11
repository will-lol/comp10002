#include <stdio.h>

int main(int argc, char *argv[]) {
  int num = 0;

  fprintf(stderr, "Enter numbers: ");

  while (fscanf(stdin, "%d", &num) == 1) {
    fprintf(stdout, "\n");

    if (num < 10) {
      fprintf(stdout, " ");
    } else if (num > 70) {
      continue;
    }
    fprintf(stdout, "%d |", num);

    for (int i = 0; i < num; i++) {
      fprintf(stdout, "*");
    }

    fprintf(stdout, "\n");
  }

  return 0;
}
