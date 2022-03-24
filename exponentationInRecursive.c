#include<stdio.h>
int pow();
int main(){
	int base;
	int top;
	printf("Enter the base number = ");
	scanf("%d",&base);
	printf("Enter the top number = ");
	scanf("%d",&top);
	printf("Value is = %d",pow(base,top));
	return 0;
}
int pow(int base,int top){
	if(top == 0){
		return 1;
	}else{
		return base * pow(base,top - 1);	
	}	
}
