#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct card{
	char *side;
	char *team;
};
typedef struct card Card;
void fillTheDeck(Card *cardDeck, char *side[], char *team[]){
	int i;
	for(i = 0; i < 52; i++){
		cardDeck[i].side = side[i % 13];
		cardDeck[i].team = team[i / 13];
	}
}
void shuffleTheDeck(Card *cardDeck){
	Card temp;
	int i, j;
	for(i = 0; i < 52; i++){
		j = rand() % 52;
		temp = cardDeck[i];
		cardDeck[i] = cardDeck[j];
		cardDeck[j] = temp;
	}
}
void distributeTheDeck(Card *cardDeck){
	int i;
	for(i = 0; i < 52; i++){
		printf("%5s %-8s%c",cardDeck[i].team, cardDeck[i].side, (i + 1) % 2 ? '\t' : '\n');
	}
}
int main(){
	Card cardDeck[52];
	char *side[] = {"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
	"Jack","Girl","Priest"};
	char *team[] = {"Cup","Tile","Fly","Spades"};
	srand(time(NULL));
	fillTheDeck(cardDeck, side, team);
	shuffleTheDeck(cardDeck);
	distributeTheDeck(cardDeck);
	return 0;
}
