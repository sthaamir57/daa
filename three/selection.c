#include <stdio.h>
#define SIZE 10000
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
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
	int n = sizeof(A) / sizeof(A[0]);
	int min;
    
    for(int i=0;i<n;i++){
         min = i;
         for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min = j;
            }
        if(i!=min)
        swap(&A[i],&A[min]);
         }
    }
	return 0;
}

