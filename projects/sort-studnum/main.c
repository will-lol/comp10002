#include <stdio.h>
#define MAX_N 300

int read_studnums_into_arrays(int studnums[], int marks[], int size);
void sort_int_array(int arr[], int n);
void sort_int_array_parallel(int sort[], int follow[], int n);
void fprint_parallel_arrays(FILE *restrict stream, int arr_1[], int arr_2[],
                            int n);

int main(int argc, char *argv[]) {
  fprintf(stderr, "Enter as many as %d student numbers and marks: \n", MAX_N);

  int studnums[MAX_N], marks[MAX_N];

  int num_read = read_studnums_into_arrays(studnums, marks, MAX_N);

  sort_int_array_parallel(studnums, marks, num_read);

  fprint_parallel_arrays(stdout, studnums, marks, num_read);
}

void sort_int_array_parallel(int sort[], int follow[], int n) {
  for (int i = 0; i < n; i++) {
    int min_val_idx = i;
    for (int j = i; j < n; j++) {
      if (sort[min_val_idx] > sort[j]) {
        min_val_idx = j;
      }
    }

    int tmp_sort = sort[i];
    int tmp_follow = follow[i];
    sort[i] = sort[min_val_idx];
    follow[i] = follow[min_val_idx];
    sort[min_val_idx] = tmp_sort;
    follow[min_val_idx] = tmp_follow;
  }
}

void sort_int_array(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int min_val_idx = i;
    for (int j = i; j < n; j++) {
      if (arr[min_val_idx] > arr[j]) {
        min_val_idx = j;
      }
    }

    int tmp = arr[i];
    arr[i] = arr[min_val_idx];
    arr[min_val_idx] = tmp;
  }
}

void fprint_parallel_arrays(FILE *restrict stream, int arr_1[], int arr_2[],
                            int n) {
  for (int i = 0; i < n; i++) {
    fprintf(stream, "%d\t%d\n", arr_1[i], arr_2[i]);
  }
}

void fprint_array(FILE *restrict stream, int arr[], int n) {
  for (int i = 0; i < n; i++) {
    fprintf(stream, "%d\n", arr[i]);
  }
}

/**
 * studnums and marks are of the same size
 *
 * @return The number of numbers read
 */
int read_studnums_into_arrays(int studnums[], int marks[], int size) {
  int studnum, mark;
  int i = 0;

  while (fscanf(stdin, "%d\t%d\n", &studnum, &mark) == 2 && i < size) {
    studnums[i] = studnum;
    marks[i] = mark;

    i++;
  }

  return i;
}
