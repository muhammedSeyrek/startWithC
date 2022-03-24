#include<stdio.h>
int bolum(int bolunen,int bolen,int sonuc,int kalan){
	if(bolunen < 0){
		kalan = 0 + (bolunen + bolen);
		printf("Kalan = %d\n",kalan);
		return sonuc - 1;
	}
	sonuc++;
	return bolum(bolunen - bolen,bolen,sonuc,kalan);
}
int main(){
	int x,y;
	printf("bolunen sayiyi giriniz = ");
	scanf("%d",&x);
	printf("bolen sayiyi giriniz = ");
	scanf("%d",&y);
	int sonuc = 0;
	int kalan = 0;
	printf("Bolum = %d",bolum(x,y,sonuc,kalan));
}
