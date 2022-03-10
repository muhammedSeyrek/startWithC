#include<stdio.h>
#include<math.h>
float weightCalculus(float money){
	int integerPart = money/1;
	float decimalPart = money*100 - integerPart*100;
	float weightMoney = 0;
	weightMoney += integerPart * 8.2;
	integerPart = decimalPart/50;
	weightMoney += integerPart * 6.8;
	integerPart = decimalPart - integerPart * 50;
	integerPart = integerPart/25;
	weightMoney += integerPart * 4.0;
	integerPart = decimalPart - integerPart * (50 + 25);
	integerPart = integerPart/10;
	weightMoney += integerPart * 3.15;
	return weightMoney/1000;
}
int main(){
	float money;
	printf("Enter the money = ");
	scanf("%f",&money);
	printf("Your weight of money = %.5f",weightCalculus(money));	
	return 0;
}
