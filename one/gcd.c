#include <stdio.h>
#define ARRAY_SIZE 10000

int gcd(int a, int b)
{
	int result = ((a < b) ? a : b);
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}
	return result; 
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
	gcd(A[r],A[r+1]);
}
	return 0;
}


