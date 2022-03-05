#include<stdio.h>
#include<time.h>
int guessNumber();
int main(int number,int guessN){
	guessNumber(number);
	return 0;	
}
int guessNumber(int number){
	srand(time(0));
	int guessN;
	guessN=rand()%20+1;
	if(guessN<10){
		printf("down 10\n");
	}else{
		printf("10 and up\n");
	}
	printf("Enter a number = ");
	scanf("%d",&number);
	if(guessN==number){
		printf("Well Done:)");
	}else{		
		printf("Nope not yet:(\n");
		return guessNumber(number);
	}
}
