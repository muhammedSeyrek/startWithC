#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
    int number = 10, randNumber, length = 0;
    int *array = malloc(number * sizeof(int));

    while(number != 0){
        randNumber = rand() % 10 + 1;
        if(number - randNumber >= 0){
            array[length++] = randNumber;
            number -= randNumber;
        }
    }

    int biggest = array[0];
    for(int i = 0; i < length; i++){
        if(biggest < array[i])
            biggest =  array[i];
        printf("%d ", array[i]);
    }
    int z;
    for(int i = 0; i < length; i++)
    	if(array[i] == biggest)
    		z = i;
    
    int biggest2 = 0;
    for(int i = 0; i < length; i++){
    	if(i != z){
    		if(i == 0)
    			biggest2 = array[i];
    		if((biggest2 < array[i]) && (biggest % 2 != array[i] % 2))
    			biggest2 = array[i];
		}
	}
	
	int temp;
	if(biggest % 2 != biggest2 % 2)
		temp = (biggest * 2) + (biggest2 * 2) - 1;
	else
		temp = (biggest * 2) - 1;

    printf("\n");
    int *index = malloc(length * sizeof(int));
    for(int i = 0; i < length; i++)
        index[i] = 0;
        
    int *sub = malloc(length * sizeof(int));
    for(int i = 0; i < length; i++)
        sub[i] = 0;
        
    int **circuits = malloc(length * sizeof(int *));
    for(int i = 0; i < length; i++){
        circuits[i] = malloc(array[i] * sizeof(int));
        for(int j = 0; j < array[i]; j++)
            circuits[i][j] = rand() % 100 + 1;
    }
    int flag = 1;
    while((temp * 2) > 0){
    	
        for(int i = 0; i < length; i++)
            index[i] = 0;
            
        for(int i = 0; i < length; i++){
            if(array[i] > 0){
            	if((biggest == array[i] - sub[i]) && flag == 1){
            		index[i] = 1;
	                array[i]--;
	                sub[i]++;
				}
            }
        }
        
        for(int i = 0; i < length; i++){
            if(index[i] == 1)
                printf("%2d ", circuits[i][array[i]]);
            else
                printf("   ");
        }
        printf("\n");
       	biggest--;
        temp--;
    }
    
    for(int i = 0; i < length; i++)        
        free(circuits[i]);

    free(circuits);    
    free(index);
    free(array);
    return 0;
}


