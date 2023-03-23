#include <stdio.h>
#define SIZE 10000

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}


int main() {
  
    int i = 0, A[SIZE];
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    while (i < SIZE && fscanf(fp, "%d", &A[i]) == 1) {
        i++;
    }
    fclose(fp);

	int x = 89988;
	int n = sizeof(A) / sizeof(A[0]);
  
  
  quickSort(A, 0, n - 1);
}
