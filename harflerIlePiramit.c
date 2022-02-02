#include<stdio.h>
int main(){
	char harf='A';
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<i+1;j++){
			printf("%c",harf);					
		}
		harf++;
		printf("\n");	
	}
	harf-=2;
	for(i=3;i>=0;i--){
		for(j=i-1;j>=0;j--){
			printf("%c",harf);
		}
		harf--;
		printf("\n");
	}
}
