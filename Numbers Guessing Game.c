#include<stdio.h>
int main(){
	srand(time(NULL));
	int rastgele,i=5,sayi;
	rastgele=rand()%100;
	printf("tahmin edilen sayi:%d\n",rastgele);
	while(i>0){
		printf("tahmin hakkiniz:%d\n",i);
		printf("Sayiyi giriniz:");
		scanf("%d",&sayi);
		if(rastgele>sayi){
			printf("tahmininizin ustunde\n");
		}
		else if(rastgele<sayi){
			printf("tahmininizin altinda\n");
		}
		else{
			printf("sayiyi %d hakkiniz kala buldunuz tebrikler\nsayi:%d",i,rastgele);
			break;	
		}
		i--;
	}
}
