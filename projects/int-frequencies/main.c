#include <stdio.h>
#define SIZE 1000
#define NOT_FOUND -1

void int_swap(int *p1, int *p2);
void insertion_sort(int arr[], int n);

int main(int argc, char *argv[]) {
  int n = 0;
  int arr[SIZE];

  fprintf(stderr, "Enter as many as 1000 values, ^D to end\n");

  int num = 0;
  while (fscanf(stdin, "%d", &num) == 1) {
    arr[n] = num;
    n++;
  }

  fprintf(stderr, "%d values read into array\n", n);

  insertion_sort(arr, n);

  fprintf(stdout, "%-5s   %s\n", "Value", "Freq");
  int current_frequency = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      current_frequency = 1;
      fprintf(stdout, "%4d", arr[i]);
    } else if (arr[i] != arr[i - 1]) {
      fprintf(stdout, "   %4d\n", current_frequency);
      current_frequency = 1;
      fprintf(stdout, "%4d", arr[i]);
    } else {
      current_frequency++;
    }
  }

  fprintf(stdout, "   %4d\n", current_frequency);

  return 0;
}

/*
 * Sorts an integer array using insertion sort
 * @param arr The array
 * @param n Length of the array
 */
void insertion_sort(int arr[], int n) {
  int sorted_index, comparison_index;

  for (sorted_index = 1; sorted_index < n; sorted_index++) {
    for (comparison_index = sorted_index - 1;
         comparison_index >= 0 &&
         arr[comparison_index + 1] < arr[comparison_index];
         comparison_index--) {
      int_swap(&arr[comparison_index], &arr[comparison_index + 1]);
    }
  }
}

/*
 * Swaps two integers
 * @param p1 First integer
 * @param p2 Second integer
 */
void int_swap(int *p1, int *p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
