#include <stdio.h>

int main(int argc, char *argv[]) {
  int num = 0;

  fprintf(stderr, "Enter numbers: ");

  while (fscanf(stdin, "%d", &num) == 1) {
    if (num >= 0 && num <= 70) {
      if (num < 10) {
        fprintf(stdout, " ");
      }

      fprintf(stdout, "%d |", num);

      for (int i = 0; i < num; i++) {
        fprintf(stdout, "*");
      }

      fprintf(stdout, "\n");
    }
  }

  return 0;
}
