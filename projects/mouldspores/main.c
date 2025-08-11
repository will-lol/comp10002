#include <stdio.h>

int main(int argc, char *argv[]) {
  int spores_yesterday = 0;
  int spores = 0;

  for (int i = 1; spores < 10000000; i++) {
    int spores_before_increment = spores;

    if (i <= 2) {
      spores = 1;
    } else {
      spores = spores + spores_yesterday;
    }

    spores_yesterday = spores_before_increment;
    fprintf(stdout, "After %d days, %d spores\n", i, spores);
  }

  return 0;
}
