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

	int x = 89988;
	int n = sizeof(A) / sizeof(A[0]);

	for(int i=1;i<n;i++){
    int temp = A[i];
    int j = i-1;
    while(j>=0 &&A[j]>temp){
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = temp;
}
	return 0;

}

