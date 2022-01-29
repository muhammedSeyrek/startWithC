#include<stdio.h>
int main(){
	int sayi1,sayi2;
	printf("lutfen birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	int i,j;
	for(i=sayi1;i>1;i--){
		if(sayi1%i==0){
			for(j=sayi2;j>1;j--){
				if(sayi2%i==0&&sayi1%i==0){
					printf("ebobu:%d\n",i);
					j=1;
					i=1;
				}else{
					i--;
				}
			}
		}	
	}	
	for(i=1;i<sayi1;i++){
		if((sayi1*i)%sayi2==0){
			printf("ekoku:%d",sayi1*i);
			break;
		}
	}	
	return 0;
}
