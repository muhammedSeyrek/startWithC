#include<stdio.h>
int main(){
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	int bas=0,son=9;
	int aranan=1;
	int sayac=0;
	int ort;
	while(bas<=son){
		ort=(bas+son)/2;
		if(aranan==dizi[ort]){
			sayac++;
			break;
		}
		else if(dizi[ort]<aranan){
			bas=ort+1;	
		}
		else{
			son=ort-1;
		}
		sayac++;	
	}
	printf("%d adimda istenilen sayi bulundu %d ",sayac,dizi[ort]);
	return 0;
}
