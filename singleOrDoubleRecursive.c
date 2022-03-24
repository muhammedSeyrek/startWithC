#include<stdio.h>
void singleOrDouble(int number[],int lenght,int doubleNumber[],int singleNumber[]){
	if(lenght < 1){
		return 0;
	}else{
		if(number[lenght] % 2 == 0){
			doubleNumber[lenght] = number[lenght];
			printf("Double Number = %d\n",doubleNumber[lenght]);
		}else{
			singleNumber[lenght] = number[lenght];
			printf("Single Number = %d\n",singleNumber[lenght]);
		}
		singleOrDouble(number,lenght - 1,doubleNumber,singleNumber);
	}
}
void main(){
	int number[10] = {1,2,3,4,5,6,7,8,9,10};
	int doubleNumber[10];
	int singleNumber[10];
	int lenght = 10;
	singleOrDouble(number,lenght,doubleNumber,singleNumber);
}

