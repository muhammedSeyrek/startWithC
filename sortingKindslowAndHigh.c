#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//tek sayilari kucukten buyuge, buyuk sayilari buyukten kucuge siralayan program.



void kucuktenSirala(int *tekDizi, int tekC){
	for(int i = 0; i < tekC; i++){
		for(int j = i; j < tekC; j++){
			if(*(tekDizi + i) > *(tekDizi + j)){
				int temp = *(tekDizi + i);
				*(tekDizi + i) = *(tekDizi + j);
				*(tekDizi + j) = temp;
			}
		}
	}
}

void buyuktenSirala(int *ciftDizi, int ciftC){
	for(int i = 0; i < ciftC; i++){
		for(int j = i; j < ciftC; j++){
			if(ciftDizi[i] < ciftDizi[j]){
				int temp = ciftDizi[i];
				ciftDizi[i] = ciftDizi[j];
				ciftDizi[j] = temp;
			}
		}
	}
}

int main(){
	srand(time(NULL));
	int boyut;
	printf("Dizi sayisini girin = ");
	scanf("%d", &boyut);
	int array[boyut];
	int tek[boyut];
	int cift[boyut];
	int *ptrTek = tek;
	int *ptrCift = cift;
	for(int i = 0; i < boyut; i++)
		array[i] = rand() % 100 + 1;
	int tekC = 0, ciftC = 0;
	for(int i = 0; i < boyut; i++){
		if(array[i] % 2 == 0){
			cift[ciftC] = array[i];
			ciftC++;
		}
		else{
			tek[tekC] = array[i];
			tekC++;
		}
			
	}
	printf("\n\n");
	kucuktenSirala(ptrTek, tekC);
	buyuktenSirala(ptrCift, ciftC);
	printf("TekSayilar = ");
	for(int i = 0; i < tekC; i++){
		printf("%d ", *(ptrTek + i));
	}
	printf("CiftSayilar = ");
	for(int i = 0; i < ciftC; i++){
		printf("%d ", *(ptrCift + i));
	}
	printf("\n");
	return 0;
}
