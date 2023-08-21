#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int game[] = {0, 1, 2}, player[2], score[3][2] = {0}, gameC = 0, win[1][2] = {0};
	char *elements[] = {"Rock", "Paper", "Scissors"};
	while(gameC < 3){
		for(int i = 0; i < 2; i++){
			player[0] = rand() % 3;
			do{
				player[1] = rand() % 3;
			}while(player[0] == player[1]);
		}
		if((player[0] - player[1] == -2) || (player[0] - player[1] == 2))
			if(player[0] > player[1])
				score[gameC][1]++;
			else
				score[gameC][0]++;
		else
			if(player[0] > player[1])
				score[gameC][0]++;
			else
				score[gameC][1]++;
		printf("Player First -> %s - Player Second -> %s\n", elements[player[0]], elements[player[1]]);
		printf("Score -> Player First = %d - Player Second = %d\n\n", score[gameC][0], score[gameC][1]);
		win[0][0] += score[gameC][0];
		win[0][1] += score[gameC++][1];
		sleep(2);
	}
	if(win[0][0] > win[0][1]) printf("Win Player First Score = %d", win[0][0]);
	else printf("Win Player Second Score = %d", win[0][1]);
	return 0;
}
