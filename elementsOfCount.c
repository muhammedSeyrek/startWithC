#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int array[10], countN[10] = {0}, flag = 11;
	for(int i = 0; i < sizeof(array) / 4; i++)
		array[i] = rand() % 10 + 1;
		
	while(--flag > 0)
		for(int i = 0; i < sizeof(array) / 4; i++)
			if(flag == array[i]) 
				countN[flag - 1]++;
				
	for(int i = 0; i < sizeof(array) / 4; i++)
		printf("%d ", array[i]);
	printf("\n");
	
	for(int i = 0; i < sizeof(array) / 4; i++)
		if(countN[i] != 0) 
			printf("There are %d out of %d\n", i + 1, countN[i]);
	return 0;
}
