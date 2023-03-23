#include <math.h>
#include <stdio.h>
#define ARRAY_SIZE 10000

int euclidean_gcd(int a, int b)
{
    if (b == 0)
        return a;
    return euclidean_gcd(b, a % b);
}
int main()
{
    int i = 0, A[ARRAY_SIZE];
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    while (i < ARRAY_SIZE && fscanf(fp, "%d", &A[i]) == 1) {
        i++;
    }
    fclose(fp);
    
        int n =  sizeof(A) / sizeof(A[0]);

for(int r =0;r<n;r++){
	if(r+1 < n)
	euclidean_gcd(A[r],A[r+1]);
}
	return 0;
}


