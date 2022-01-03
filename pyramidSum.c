#include<stdio.h>
int main(){
	int i,j,x;
	printf("bir sayi giriniz:");
	scanf("%d",&x);	
	for(i=1;i<x+1;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	return 0;
}
