#include<stdio.h>
int main(){
	int dizi[1],istenilen = 7,toplam=0,sayac=0;
	int x=1,i=0;
	while(i<x){
		printf("sayi giriniz:");
		scanf("%d",&dizi[i]);
		sayac++;
		if(istenilen==dizi[i]){
			toplam+=dizi[i];
			break;
		}
		else{
			toplam+=dizi[i];
			dizi[i]=0;
			x=1;
			i=0;
		}
	}
	printf("%.2f",(float)toplam/sayac);
	return 0;
}
