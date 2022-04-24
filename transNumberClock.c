#include<stdio.h>
#include<stdlib.h>
void trans(int *a,int *b,int *c,int *d){
	char choose[2];
	printf("Enter the choose(D or T)\n");
	scanf("%s",&choose);
	int process = strcmp(choose,"T") + 5;
	int process2 = strcmp(choose,"D");
	if(process == 5){
		printf("Counter Clockwise = ");
		int temp = *a;
		*a = *b;
		*b = *c;
		*c = *d;
		*d = temp;
	}
	if(process2 == 0){
		printf("Clockwise = ");
		int temp = *d;
		*d = *c;
		*c = *b;
		*b = *a;
		*a = temp;
	}
}
int main(){
	int a,b,c,d;
	int i;
	printf("Enter the numbers = ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	trans(&a,&b,&c,&d);
	printf("%d %d %d %d",a,b,c,d);
	return 0;
}
