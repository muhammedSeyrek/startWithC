#include<stdio.h>
int numbers(int n){
	if(n < 4){
		return 0;
	}
	else{
		if(n % 2){
			printf("Single Number = %d\n",n);
			return number(n - 1);
		}
		else{
			printf("Decimal Number = %d\n",n);
			return number(n - 1);
		}
	}
}
int main(){
	numbers(10);
	return 0;
}

//Let's use it different



int decimal(int n){
	if(n < 4){
		return 0;
	}else{
		if(n % 2 == 0){
			return 1;
		}
		printf("Single Number = %d\n",n);
		single(n - 1);
	}
}
int single(int n){
	if(n < 4){
		return 0;
	}else{
		if(n % 2){
			return 1;
		}
		printf("Decimal Number = %d\n",n);
		decimal(n - 1);
	}
}
int main(){
	decimal(10);
	single(10);
	return 0;
}
