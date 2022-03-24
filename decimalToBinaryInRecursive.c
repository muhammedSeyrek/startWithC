#include<stdio.h>
int decimalToBinary(int decimalNumber){
	if(decimalNumber >= 2){
		decimalToBinary(decimalNumber / 2);
	}
	printf("%d",decimalNumber % 2);
}
void main(){
	int decimalNumber;
	printf("Enter the decimal number = ");
	scanf("%d",&decimalNumber);
	printf(" = Binary Number ",decimalToBinary(decimalNumber));
}

