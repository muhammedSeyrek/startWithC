#include<stdio.h>
#include<stdlib.h>
void doubleAndSingleNumbers(int *counterDouble, int *counterSingle,int *ptr, int len){
	while(*ptr > 0){
		if(*ptr % 2 == 0){
			(*counterDouble)++;
			*ptr /= 10;
		}
		else if(*ptr % 2 == 1){
			(*counterSingle)++;
			*ptr /= 10;
		}
	}
}
int main(){
	int number;
	int zero1 = 0;
	int zero2 = 0;
	int *counterDouble = &zero1;
	int *counterSingle = &zero2;
	printf("Please enter the number = ");
	scanf("%d",&number);
	int *ptr = &number;
	int len,temp;
	temp = number;
	while(temp > 0){
		temp /= 10;
		len++;
	}
	doubleAndSingleNumbers(counterDouble,counterSingle,ptr,len);
	printf("Double number count = %d\n",*counterDouble);
	printf("Single number count = %d\n",*counterSingle);
	return 0;
}
