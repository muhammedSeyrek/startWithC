#include<stdio.h>
int main(){
	int bin;
	int dec = 0;
	int i,carp=1;
	printf("Binary bir sayi girin:");
	scanf("%d",&bin);
	while(bin>0){
		dec=dec+(bin%10)*carp;
		bin=bin/10;
		carp*=2;
	}
	printf("Decimal Degeri = %d",dec);
	return 0;
}
