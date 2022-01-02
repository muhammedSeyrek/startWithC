#include<stdio.h>
//689 tane 1 olan kitabýn sayfa sayisi nedir?
int main(){
	int kontrol=0,sayfaSayisi=1;
	int sayi=1;
	sayfaSayisi=sayi;
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
