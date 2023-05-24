#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int **arrayFunc(){
	int **grid = malloc(3);
	for(int i = 0; i < 3; i++){
		grid[i] = malloc(3);
		for(int j = 0; j < 3; j++){
			grid[i][j] = rand() % 9 + 1;
		}
	}
	return grid;
}
int main(){
	srand(time(NULL));
	int **array = arrayFunc();
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
