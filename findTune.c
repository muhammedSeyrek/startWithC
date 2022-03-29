#include<stdio.h>
#include<string.h>
#include<locale.h>
int funcR(int sound[],int indis,int process,int again){
	if(again < 1){
		return 0;
		printf("%d",sound[indis]);
	}
	else{
		if(again == 3){
			printf("1.Sesi seciniz = \n");
		}
		if(again == 2){
			printf("\n3.Sesi seciniz = \n");
		}
		if(again == 1){
			printf("\n5.Sesi seciniz = \n");
		}
		printf("1 - A\n2 - A#\n3 - B\n4 - C\n5 - C#\n6 - D\n7 - D#\n8 - E\n9 - F\n10 - F#\n");
		printf("11 - G\n12 - G#\n");
		scanf("%d",&process);
		switch(process){
			case 1:
				printf("A");
				break;
			case 2:
				printf("A#");
				break;
			case 3:
				printf("B");
				break;	
			case 4:
				printf("C");
				break;
			case 5:
				printf("C#");
				break;
			case 6:
				printf("D");
				break;
			case 7:
				printf("D#");
				break;
			case 8:
				printf("E");
				break;
			case 9:
				printf("F");
				break;
			case 10:
				printf("F#");
				break;
			case 11:
				printf("G");
				break;
			case 12:
				printf("G#");
				break;
			default:
				break;	
		} 
	}
	sound[indis] = process;
	return funcR(sound,indis - 1,process,again - 1);
}
int chords(int sound[],int indis,char note[][24],int lenght,int process){
	int i;
	if(sound[i] - sound[i + 1] == 4 || sound[i + 1] - sound[i + 2] == 3){
		int process = 1;
		printf(" Minor Tonu oldugu icin asagidaki akorlari alabilir.\n");
		return process;
	}else if(sound[i] - sound[i + 1] == 3 || sound[i + 1] - sound[i + 2] == 4){
		int process = 2;
		printf(" Major Tonu oldugu icin asagidaki akorlari alabilir.\n");
		return process;
	}	
}
int main(){
	setlocale(LC_ALL, "Turkish");
	int lenght = 24;
	char note[24][4]={"A","A#","B","C","C#","D","D#","E","F","F#","G","G#",
	"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};		
	char minor = 'm',ses1[2],ses3[2],ses5[2];
	char dim = '°';
	int process,again = 3;
	int sound[3];
	int len = 3;
	int indis = len - 1;
	funcR(sound,indis,process,again);
	printf("\n%s",note[sound[indis] - 1]);
	int noteValue = sound[indis];
	int value = chords(sound,indis,note[24],lenght,process);
	if(value == 1){
		int i,j;
		for(i = noteValue - 1; i < (noteValue + 11); i++){
			for(j = 0; j < strlen(note[i]); j++){
				if(i == noteValue - 1){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 1){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",dim);
					}				
				}
				if(i == noteValue + 2){
					printf("%c",note[i][j]);
				}
				if(i == noteValue + 4){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 6){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 7){
					printf("%c",note[i][j]);
				}
				if(i == noteValue + 9){
					printf("%c",note[i][j]);
					
				}
			}
		}
	}
	if(value == 2){
		int i,j;
		for(i = noteValue - 1; i < (noteValue + 11); i++){
			for(j = 0; j < strlen(note[i]); j++){
				if(i == noteValue - 1){
					printf("%c",note[i][j]);
				}
				if(i == noteValue + 1){
					printf("%c",note[i][j]);	
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 3){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 4){
					printf("%c",note[i][j]);
				}
				if(i == noteValue + 6){
					printf("%c",note[i][j]);
				}
				if(i == noteValue + 8){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",minor);
					}
				}
				if(i == noteValue + 10){
					printf("%c",note[i][j]);
					if(j == strlen(note[i]) - 1){
						printf("%c",dim);
					}
				}
			}
		}
	}
	return 0;
}
