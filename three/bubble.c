#include <stdio.h>
#define SIZE 10000

int main(void)
{
    int i = 0, A[SIZE];
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    while (i < SIZE && fscanf(fp, "%d", &A[i]) == 1) {
        i++;
    }
    fclose(fp);

	int n = sizeof(A) / sizeof(A[0]);

	for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(A[j]<A[j-1]){
                int temp;
                temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }
	return 0;
}

