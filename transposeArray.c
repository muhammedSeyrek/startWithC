#include<stdio.h>
#define line 2
#define column 3
int main(){
	int array[line][column];
	int transposeArray[column][line];
	int i,j;
	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
			printf("Enter Number = ");
			scanf("%d",&array[i][j]);
		}
	}
	for(j=0;j<column;j++){
		for(i=0;i<line;i++){
			transposeArray[j][i]=array[i][j];
		}
	}
	for(i=0;i<column;i++){
		for(j=0;j<line;j++){
			printf("%d ",transposeArray[i][j]);
		}
		printf("\n");
	}
	return 0;
}
