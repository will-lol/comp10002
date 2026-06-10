#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {}

void merge(int *arr1, int n1, int *arr2, int n2) {
  int tmp[n1];
  memcpy(tmp, arr1, sizeof(int) * n1);

  int p1, p2 = 0;

  while (1) {
    if (tmp[p1] > arr2[p2]) {
    }
  }
}

void mergesort(int *arr, int n) {
  if (n <= 1) {
    return;
  }
  int mid = (n - 1) / 2;
  int n1 = n / 2;
  int n2 = n - n / 2;
  mergesort(arr, n1);
  mergesort(&arr[mid], n2);
  merge(arr, n1, &arr[mid], n2);
}
