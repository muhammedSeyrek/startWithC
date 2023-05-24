#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check(int randN, int sendN){
	if(randN == sendN)
		return 1;
	else 
		return 0;
}

int main(){
	srand(time(0));// 0 yerine NULL'da yazilabilir.
	int flag = 0;
	int counter = 1, temp;
	while(!flag){
		int randN = rand() % 100 + 1; // 1 dahil 100 dahil random sayi ver.
		int a = rand() % 6;
		int b = rand() % 6;
		printf("enter number between %d - %d = ", randN - a, randN + b);
		int sendN;//Kullanicidan sayi gir.
		scanf("%d", &sendN);
		temp = randN;//Dongunun disinda kullanmak icin.
		if(check(randN, sendN))
			flag = 1;
		else{
			printf("You cant know, number is %d\n", randN);
			counter++;	
		}
	}
	printf("Well done correct is number %d\nYou well after %d step", temp, counter);
	return 0;
}
