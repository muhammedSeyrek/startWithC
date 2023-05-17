#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1 ler mayinsiz, 0 lar mayinli olacak.
//random sayilar ataninca kullaniciya sadece * gozukecek
//


int array[10][10];

void randN(){
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
			array[i][j] = rand() % 2;
}

void printPre(){
	printf("   ");
	for(int i = 0; i < 10; i++)
		printf("%d  ", i + 1);
	printf("\n");
}

void printEdge(int i){
		printf("%2d", i + 1);
}

void print(){
	printPre();
	for(int i = 0; i < 10; i++){
		printEdge(i);
		for(int j = 0; j < 10; j++){
			if(array[i][j] != 2)
				printf(" * ");
			else
				printf(" :)");
		}
		printf("\n");
	}
}

void printMine(){
	printPre();
	for(int i = 0; i < 10; i++){
		printEdge(i);
		for(int j = 0; j < 10; j++){
			if(array[i][j] != 0)
				printf(" :)");
			else
				printf(" # ");
		}
		printf("\n");
	}
}

int main(){
	randN();
	int x, y, counter = 1, flag = 1;
	while(counter <= 5){
		print();
		printf("\n\nEnter a cordinats = ");
		scanf("%d %d", &x, &y);
		flag = array[x - 1][y - 1] ? 1 : 0;
		if(flag == 0) 
			break;
		array[x - 1][y - 1] = 2;
		counter++;
	}
	if(counter != 6)
		printf("\nYou lose!!!\n");
	else
		printf("\nYou Won :)\n");
	printMine();
	return 0;
}
