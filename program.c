#include<stdio.h>
int main(){
	int x, i, j, k, counter = 32, counterR = 1, cards[6][32] = {0};
	while(x < 6){
		int number = counterR;
		int temp = counterR;
		k = 0;
		for(i = 0; i < counter; i++){
			for(j = 0; j < temp; j++){
				cards[x][k] = number;
				number += 1;
				k++;
			}
			number += (temp);
		}
		counter /= 2;
		counterR *= 2;
		x++;
	}
	int meter = 0, sum = 0, procces;
	counter = 1;
	do{
		printf("Bu kartlarin herhangi birinden bir sayi tutun\n");
		for(i = 0; i < 6; i++){
			k = 0;
			for(j = 0; j < 32; j++){
				for(x = 0; x < 8; x++){
					printf("%d ",cards[i][k]);
					k += 1;
				}
				j += 8;
				printf("\n");
			}
			printf("\n");
		}
		meter++;
		printf("%d.Kartta var mi? (Evet = 1) (Hayir = herhangi bir sayi) = ",meter);
		scanf("%d",&procces);
		if(procces == 1)
			sum += counter;
	 		counter *= 2;
	}while(meter < 6);
	printf("Tuttugunuz sayi = %d",sum);
	return 0;
}
