#include<stdio.h>
int factCalculus();
int main(){
	int number,fact;
	printf("Enter the number = ");
	scanf("%d",&number);
	fact = factCalculus(number);
	printf("%d\n",fact);
}
int factCalculus(int number){
	if(number<=1){
		return 1;
	}else{
		return (number * factCalculus(number-1));
	}
}
