#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person{
	int hesapNo;
	char soyIsim[15];
	char isim[10];
	int bakiye;
}Person;


int main(){
	printf("Enter a persons information...\n");
	FILE *fptr, *fptr2;
	Person person[10];
	fptr = fopen("dosya1.txt","w");
	for(int i = 0; i < 10; i++){
		printf("Enter a account number = ");
		scanf("%d", &person[i].hesapNo);
		printf("Enter the surname = ");
		scanf("%s", person[i].soyIsim);
		printf("Enter a name = ");
		scanf("%s", person[i].isim);
		printf("Enter a balance = ");
		scanf("%d", &person[i].bakiye);
	}
	for(int i = 0; i < 10; i++){
		fprintf(fptr, "%d %d %s %s %d\n", i + 1, person[i].hesapNo, person[i].soyIsim, 
		person[i].isim, person[i].bakiye);
	}
	fclose(fptr);
	int x, y;
	printf("Enter a two number = ");
	scanf("%d %d", &x, &y);
	fptr2 = fopen("dosya2.txt", "w");
	for(int i = x - 1; i < y; i++){
		fprintf(fptr, "%d %d %s %s %d\n", i + 1, person[i].hesapNo, person[i].soyIsim, 
		person[i].isim, person[i].bakiye);
	}
	return 0;
}
