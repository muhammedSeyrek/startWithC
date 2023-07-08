#include <stdio.h>
// (ab + cd) / 2 = ab,cd algorithm that finds numbers matching this formula
int main(){
	int array[90], counter = 0;
	for(float i = 10.0; i < 100.0; i += 1.0)
		for(float j = 10.0; j < 100.0; j += 1.0)
			if((i - (2 * (i / 100))) == j){
				array[counter++] = i;
				array[counter++] = j;
			}
			
	for(int i = 0; i < counter;) 
		printf("%d - %d cifti\n", array[i++], array[i++]);
	return 0;
	
}
