#include<stdio.h>
int main(){
	int matrix1[2][2]={{1,2},{3,4}},matrix2[2][2]={{5,6},{7,8}},productMatrix[2][2]={0};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				productMatrix[i][j]+=(matrix1[i][k]*matrix2[k][j]);
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",productMatrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
