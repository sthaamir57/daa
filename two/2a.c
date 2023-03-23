#include <stdio.h>
#define SIZE 1000000
int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
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

	int x = 89988;
	int N = sizeof(A) / sizeof(A[0]);

	int result = search(A, N, x);
	if(result !=-1)
	printf("Found at %d positon",result);
	return 0;
}

