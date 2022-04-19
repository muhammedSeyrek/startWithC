#include<stdio.h>
#include<stdlib.h>
void transNumber(int *aPtr, int n, int *bPtr){
	int i = 4;
	int process = *aPtr;
	while(i > 0){
		if(process % 2 == 1){
			process /= 2;
			bPtr[i - 1] = 1;
			i--;
		}else{
			bPtr[i - 1] = 0;
			process /= 2;
			i--;
		}
	}
}
void giveAuthority(int *bPtr, int count){
	if(bPtr[3] == 1){
		printf("Given Authority = 'Printing'\n");
	}
	if(bPtr[2] == 1){
		printf("Given Authority = 'Operating'\n");
	}
	if(bPtr[1] == 1){
		printf("Given Authority = 'Writing'\n");
	}
	if(bPtr[0] == 1){
		printf("Given Authority = 'Reading'\n");
	}
}
int main(){
	int number;
	int *aPtr = &number;
	printf("Please, enter the authority number = ");
	scanf("%d",&aPtr);
	int binaryNumber[4];
	transNumber(&aPtr,4,binaryNumber);
	giveAuthority(binaryNumber,4);
	return 0;
}
