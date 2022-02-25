#include<stdio.h>
#define satir 2
#define sutun 3
int main(){
	int array[satir][sutun],array2[satir][sutun];
	int sumArrays = 0;
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("Enter Number array = ");
			scanf("%d",&array[i][j]);
			printf("Enter Number array2 = ");
			scanf("%d",&array2[i][j]);
			sumArrays += array[i][j]+array2[i][j];
		}
	}
	printf("Totals = %d",sumArrays);	
	return 0;
}
