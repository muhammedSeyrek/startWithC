#include<stdio.h>
void triangle();
void rectangle();
void space();
int main(){
	triangle();
	rectangle();
	space();
	triangle();
	rectangle();
	return 0;
}
void triangle(int i,int j){
	for(i=0;i<5;i++){
		for(j=i;j<4;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");			
	}
}
void rectangle(int i,int j){
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			printf("*");
		}
		printf("\n");
	}
}
void space(){
	printf("\n\n");
}

