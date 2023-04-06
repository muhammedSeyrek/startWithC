#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int checkNumber(int *array, int number, int x){
	for(int i = 0; i < x; i++)
		if(array[i] == number)
			return 0;
	return 1;
}
int checkDifference(int *dif, int x){
	for(int i = 1; i < x; i++)
		if(dif[x] == dif[i])
			return 0;
	return 1;
}
int main(){
	srand(time(NULL));
	int x = 4;
	int array[x + 1];
	int dif[x + 1];
	int i = 0, j = 0;
	while(i <= x){
		array[i] = rand() % (x + 1);
		if(i > 0)
			dif[j] = array[i] - array[i - 1];
		if(checkNumber(array, array[i], i))
			if(checkDifference(dif, j)){
				i++; 
				j++;
			}
	}
	for(i = 0; i <= x; i++)
		printf("%d ", array[i]);
	printf("\n");
	for(i = 1; i <= x; i++)
		printf("%d ", dif[i]);
	return 0;
}

