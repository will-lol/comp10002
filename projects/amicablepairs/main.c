#include <stdio.h>
#include <stdlib.h>

int is_factor_of(int factor, int num);
int sum_factors(int n);
int is_amicable_pair(int n1, int n2);

int main(int argc, char *argv[]) {
  int n1, n2;

  fprintf(stderr, "Enter two numbers seperated by a space: ");
  if (fscanf(stdin, "%d %d", &n1, &n2) != 2) {
    fprintf(stderr, "Input error");
    exit(EXIT_FAILURE);
  }

  if (is_amicable_pair(n1, n2)) {
    fprintf(stdout, "%d and %d are amicable pairs", n1, n2);
  } else {
    fprintf(stdout, "%d and %d are not amicable pairs", n1, n2);
  }
}

int is_amicable_pair(int n1, int n2) {
  return sum_factors(n1) == n2 && sum_factors(n2) == n1;
}

int sum_factors(int n) {
  int sum = 0;

  for (int i = 1; i < n; i++) {
    if (is_factor_of(i, n)) {
      sum += i;
    }
  }

  return sum;
}

int is_factor_of(int potential_factor, int num) {
  return num % potential_factor == 0;
}
