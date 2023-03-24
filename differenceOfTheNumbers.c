#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int x;
	printf("O sayi ve altindaki sayilarin toplami cift olan sayilar giriniz...  = ");
	scanf("%d", &x);
	int temp[100][x + 1];
	int counter = 0;
	int kind = 1;
	int count[100] = {0};
	int array[x + 1];//0 la beraber tutacagi icin sayinin bir fazlasi.
	while(counter < 100){
		count[0] = 1;
		int flag = 1, i = 1;
		array[0] = x;
		while(i != x + 1){//istenilen sayiya kadar random atama islemi.
			array[i] = rand() % x;
			for(int j = 0; j < i; j++){
				if(array[i] == array[j])
					flag = 0;//olumsuzluk eki, esitlik olursa baska sayiyla tekrar deneme yaptýracak.
			}
			if(array[i] == array[i - 1] + 1){
				if(flag == 1)//bir fazla olmasi da olumsuzluk, tekrar denettirecek.
					flag = 0;
			}
			if(flag == 0){
				flag = 1;
				i--;	//olumsuzluk durumunda azaltsin.
			}
			else
				i++; //bir sorun yoksa devam etsin kontrole.
		}
		
		for(int i = 0; i <= x; i++)//bu kisimda sayilari siralariz.
			printf("%d ", array[i]);
		
		printf("\n");
		
		int lastValue[x];
		//Aralarindaki farki yeni bir diziye attigimiz kisim.
		for(int i = 0; i <= x; i++){
			temp[counter][i] = array[i];
			if(i != x)
				lastValue[i] = (array[i] - array[i + 1]) * -1;
			else
				lastValue[i] = ((array[x] - array[0]) * -1);
		}
		//Aralarindaki farklari yazan kisim.
		for(int i = 0; i <= x; i++){
			if(lastValue[i] > 0)
				printf("+%d ", lastValue[i]);
			else
				printf("%d ", lastValue[i]);
		}
		int diff = 0;
		for(int i = 0; i <= x; i++){
			diff -= lastValue[i];
		}
		printf(" = %d\n", diff);
		counter++;
	}
	for(int j = 0; j < counter; j++){
		for(int k = j + 1; k < counter; k++){//burda diziyi kendi icinde dondurucez
			int	all = 0;//amacimiz farkli sayilari bulmak
			for(int l = 0; l <= x; l++){
				if(temp[k][0] != 0 && temp[j][0] != 0)
					if(temp[j][l] == temp[k][l])
						all++;	
					else
						break;	
				else
					break;
			}
			if(all == x + 1){
				temp[k][0] = 0;//ayni olanlari isaretliyoruz
			}
		}
	}
	kind = 0;
	for(int i = 0; i < counter; i++)
		for(int j = 0; j <= x; j++)
			if(temp[i][j] == x)//eger isareti istenilen sayi dizisi ise cesiti artiriyoruz.
				kind++;
	printf("\n\nToplam %d cesit var.\n\n", kind);
	return 0;
}
