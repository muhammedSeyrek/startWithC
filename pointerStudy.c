#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	void changeName(char *name){
		*name = "Merve";
	}//Fonksiyonlarin main icinde kullanýlmasý sadece main fonksiyonundan cagrilinca calisir.
	//Buda baska fonksiyonlardan cagrilamayacagi anlamina gelir.
	//Bu durum bazi durumlarda güvenlik saglar.
	char *name = "Muhammed";
	printf("%s\n", name);
	changeName(&name);
	printf("%s\n\n", name);
	
	
	int num1 = 10;
	int num2 = 20;
	int *ptr = &num1;
	*ptr = 30;
	ptr = &num2;
	printf("%d\n\n", *ptr);
	
	
	void square(int *number){
		*number = *number * *number;
	}
	int num = 5;
	square(&num);
	printf("Square = %d\n\n", num);
	
	
	int *numberMalloc = malloc(sizeof(int));
	if(*numberMalloc != NULL){
		*numberMalloc = 42;
		printf("Value = %d\n\n", *numberMalloc);
		free(numberMalloc);
	}
	printf("Value after free = %d\n\n", *numberMalloc);
	
	
	
	
	
	
	return 0;
}
