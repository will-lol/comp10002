#include <stdio.h>

int main(int argc, char *argv[]) {
  int big, bp1, bt2, bp1t2;

  big = 2147483647;
  bp1 = big + 1;
  bt2 = big * 2;
  bp1t2 = bp1 * 2;

  printf("big=%d, bp1=%d, bt2=%d, bp1t2=%d\n", big, bp1, bt2, bp1t2);

  return 0;
}
