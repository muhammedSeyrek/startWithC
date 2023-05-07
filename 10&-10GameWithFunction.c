#include <stdio.h>

int check(int array[], int compare){
	int step = 4;
	while(--step > 0){
		int result1 = 0, result2 = 0, result3 = 0, a = 0, b = 2, count = 0;
		for(int i = 0; i < 9; ){
			if(step == 3){
				if(array[count] == compare)
					result1 += compare;
				if(array[count + 3] == compare)
					result2 += compare;
				if(array[count + 6] == compare)
					result3 += compare;	
				i += 3;
				count++;
			}
			else if(step == 2){
				if(array[i] == compare)
					result1 += compare;
				if(array[i + 1] == compare)
					result2 += compare;
				if(array[i + 2] == compare)
					result3 += compare;	
				i += 3;
			}
			else{
				if(array[a] == compare)
					result1 += compare;
				if(array[b] == compare)
					result2 += compare;
				a += 4;
				b += 2;
				i += 3;
			}
		}
		if(result1 == (compare * 3) || result2 == (compare * 3) || result3 == (compare * 3))
			return 1;
	}
	return 0;
}

void print(int array[]){
	for(int j = 0; j < 9; j++){
		if(array[j] == 10)
			printf("%d  ", array[j]);
		else if(array[j] == -10)
			printf("%d   ", array[j]);
		else
			printf("%d   ", array[j]);
		if(j % 3 == 2) printf("\n");
	}
}

int main(){
	int decree = 2;
	while(decree != 0){
		int array[9];
		for(int i = 0; i < 9; i++) 
			array[i] = i + 1;
		for(int i = 0; i < 9; i++){
			print(array);
			int section;
			printf("Which choise section = ");
			scanf("%d", &section);
			if(i % 2 == 0){
				array[section - 1] = 10;
				if(check(array, 10)){
					printf("\nWon 10\n\n");
					print(array);
					decree = 1;
					break;
				}
			}	
			else{
				array[section - 1] = -10;
				if(check(array, -10)){
					printf("\nWon -10\n\n");
					print(array);
					decree = 1;
					break;
				}
			}
		}
		decree--;
	}
	return 0;	
}
