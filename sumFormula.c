#include <stdio.h>
#include <math.h>
int fact(int k){
	int fact = 1;
	for(int i = 1; i <= k; i++)
		fact *= i;
	return fact;
}

int power(int n){
	int number = 1;
	for(int i = 0; i < n; i++)
		number *= 2;
	return number;
}

int square(int n){
	int i = 1;
	for(i = 2; ; i++)
		if(n % i == 0)
			break;
	return i;
}

int main(){
	int n;
	printf("Enter a n = ");
	scanf("%d", &n);
	int k = square(n);
	float array[k][k];
	for(int i = 0; i < k; i++){
		for(int j = 0; j < k; j++){
			float factN = fact(i);
			float topN = power(i);
			array[i][j] = (float) (factN / topN);
			printf("%.2f ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
