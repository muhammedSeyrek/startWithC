#include<stdio.h>
int main(){
	int dizi[6],i;
	int max,min;
	for(i=0;i<6;i++){
		printf("Dizi icin sayi giriniz:");
		scanf("%d",&dizi[i]);
		if(i==0){
			max=dizi[i];
			min=dizi[i];
		}
		if(dizi[i]>=max){
			max=dizi[i];
		}
		if(dizi[i]<min){
			min=dizi[i];
		}
	}
	printf("Maximum Deger = %d\n",max);
	printf("Minimum Deger = %d\n",min);	
	
	
	
	
	
	
	
	
	
	return 0;
}
