#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dice();
int diceRoll();
int dices[2];
int main(int throw){
	srand(time(0));
	dice(20);
	return 0;
}
int dice(int again){
	int freq[13] = {0};
	int i,j,sum = 0;
	for(i=0;i<again;i++){
		for(j=0;j<2;j++){
			dices[j] = rand()%6+1;
		}
		sum = dices[0] + dices[1];
		freq[sum]++;
	}
	diceRoll(freq);
}
int diceRoll(int freq[]){
	int i;
	for(i=2;i<13;i++){
		printf("%d:",i);
		printf("%d\n",freq[i]);
	}
	printf("\n");
}
