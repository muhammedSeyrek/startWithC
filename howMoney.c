#include<stdio.h>
void totalMoney();
int main(){
	float valueMoney[4];
	int i;
	for(i=0;i<4;i++){
		printf("Enter the of coins in order (1Pound,50Penny,25Penny,10Penny) = ");
		scanf("%f",&valueMoney[i]);
	}	
	totalMoney(valueMoney);
	return 0;
}
void totalMoney(float valueMoney[]){
	float value = 8.2;
	float productValue = 1.0; 
	float valueToFall = 1.4;
	float sum = 0.0;
	int i;
	for(i=0;i<4;i++){
		if(i == 3){
			productValue = 0.10;
			value = 3.15;
		} 
		sum += (productValue * (valueMoney[i] * 1000) / value);
		value -= valueToFall;
		valueToFall += 1.4;
		productValue/=2.0;
	}
	printf("Total money = %.2f",sum);
}
