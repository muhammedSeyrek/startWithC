#include<stdio.h>
int combination();
int main(){
	int number;
	int degree;
	printf("Enter the comb number = ");
	scanf("%d",&number);
	printf("Enter the comb number degree = ");
	scanf("%d",&degree);
	printf("Combination = %d",combination(number,degree));
	
	return 0;
}
int combination(int number,int degree){
	if(degree == 0){
		return 1;
	}else{
		return (number * combination(number - 1,degree - 1))/degree;
	}
	
	
}
