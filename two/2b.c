#include <stdio.h>
#define SIZE 1000000
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}
int main(void)
{
    int i = 0, A[SIZE];
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    while (i < SIZE && fscanf(fp, "%d", &A[i]) == 1) {
        i++;
    }
    fclose(fp);

	int x = 59988;
	int N = sizeof(A) / sizeof(A[0]);

	int result = binarySearch(A,0,N,x);
	if(result !=-1)
	printf("Found at %d positon",result);
	return 0;
}

