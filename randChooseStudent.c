#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(void){
	srand(time(0));
	int countStudent = 22;
	int *array = malloc(countStudent * sizeof(int));
	int j = 0;
	while(j < countStudent){
		int flag = 1;
		int randomNumber = rand() % countStudent + 1;
		for(int i = 0; i < j; i++)
			if(randomNumber == array[i])
				flag = 0;
		if(flag)
			array[j++] = randomNumber;
	}
	for(int i = 0; i < countStudent; i++)
		if(array[i] >= 10)
			printf("%2d ", array[i]);
		else
			printf("%3d ", array[i]);
}
