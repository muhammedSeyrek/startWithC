#include<stdio.h>
//689 tane 1 olan kitabın sayfa sayisi nedir?
int main(){
	int kontrol=0,sayfaSayisi=1;
	int sayi=1;
	while(1){
		sayi=sayfaSayisi;
		while(sayi>0){  
			if(sayi%10==1){
			    kontrol++;
				sayi/=10;
			}else{
			    sayi/=10;
			}
		}
		if(kontrol==689) break;
		
		sayfaSayisi++;		
	}
	printf("Sayfa Sayisi:%d",sayfaSayisi);
}
//farklı bir şekilde yapımı.
#include<stdio.h>
int main(){
	int sayi=1,geciciSayi,sayac=0;
	while(sayac<689){
		geciciSayi=sayi;
		while(sayi>0){
			if(sayi%10==1){
				sayac++;
				sayi/=10;
			}else
				sayi/=10;
			}
		}
		sayi=geciciSayi;
		if(sayac==689)break;
		sayi++;
	}
	printf("%d",sayi);
}
