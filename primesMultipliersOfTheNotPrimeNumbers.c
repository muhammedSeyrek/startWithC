#include <stdio.h>
int main(){
	int i, j, k, flag;
	for(i = 2; i < 100; i++){
		flag = 1;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				if(flag == 1){
					printf("%d = ", i);
				}
				flag = 0;
				int flag2 = 0;
				for(k = 2; k < j && flag2 == 0; k++){
					if(j % k == 0){
						flag2 = 1;
					}
				}
				if(flag2 == 0){
					printf("%d ", j);
				}		
			}
			
		}
		if(flag == 0){
			printf("\n");
		}
	}
	return 0;
}
