#include<stdio.h>
int toplam = 0;
int main(){
	int elemanSayisi;
	printf("Dizinin eleman sayisini giriniz = ");
	scanf("%d",&elemanSayisi);
	int dizi[elemanSayisi];
	int i;
	for(i = 0; i < elemanSayisi; i++)
		scanf("%d",&dizi[i]);
	int indis = elemanSayisi - 1;
	int  toplam = topla(dizi,indis);
	printf("Toplami = %d",toplam);	
	return 0;
}
int topla(int dizi[],int indis){
	if(indis < 0)
		return 0;
	else 
		return dizi[indis] + topla(dizi,indis - 1);
}
