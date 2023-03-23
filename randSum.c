#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int x;
	printf("O sayi ve altindaki sayilarin toplami cift olan sayilar giriniz...  = ");
	scanf("%d", &x);
	int flag = 1, i = 1;
	int array[x + 1];//0 la beraber tutacagi icin sayinin bir fazlasi.
	array[0] = x;
	while(i != x + 1){//istenilen sayiya kadar random atama islemi.
		array[i] = rand() % x;
		for(int j = 0; j < i; j++){
			if(array[i] == array[j])
				flag = 0;//olumsuzluk eki, esitlik olursa baska sayiyla tekrar deneme yaptıracak.
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
	int values[x], sum = 0, y = 0;//values toplamları yarisi eden sayilar.
	//Algoritma; 4 sayisini ele alalim, alt sayilari ile toplamlari 10 ediyor. bana 5 lik kisim lazim
	//toplamlari 0 etmesi icin. bu yuzden (n * (n+1)) / 2 toplamlari veriyor. Ama bana 5 lik kisim lazim oldugu icin
	//ben 2 yerine 4 e bolucem.
	i = 0; 
	while(sum != (x * (x + 1)) / 4){
			sum += array[i];
		if((x * (x + 1)) / 4 >= sum){
			if(array[i] != 0){//0 sa o sayi degerlerim icine alma.
				values[y] = array[i];
				y++;	
			}
		}
		else{
			sum -= array[i];//toplami gecerse sil diger sayilari dene
		}
		i++;
	}
	int k = 0;
	for(int i = 0; i <= x; i++){
		flag = 1;
		for(int k = 0; k < y; k++){
			if(array[i] == values[k]){//values kisimlarina ister + ister - derim
				flag = 0;
				printf("+%d ", array[i]);
			}
		}
		if(flag == 1)
			printf("-%d ", array[i]);//flag 1 olma durumu array[i] sayisi eger values de varsa yazdirma
			//eger olursa zaten flag == 1 olacak bu yuzden - olarak basicak. 
	}
	printf("= 0");
	return 0;
}
