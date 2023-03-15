#include <stdio.h>
int main(){
	printf("Enter a number but under of the 10 = ");
	int n;
	scanf("%d", &n);
	int m = n;
	int c = n - 4;
	for(int i = 0; i < m; i++){
		if(i + 1 != m){
			for(int j = 0; j <= i; j++) 
				printf(" ");
			printf("%d", i + 1);
			for(int j = 0; j <= n + c; j++) 
				printf(" ");
			n -= 2;
			printf("%d\n", i + 1);
		}
		else{
			for(int j = 0; j < m; j++)
				printf(" ");
			printf("%d\n", i + 1);
		}
	}
	int number = m - 1;
	int space = 1;
	for(int i = 0; i < m - 1; i++){
		for(int j = 0; j < number; j++)
			printf(" ");
		printf("%d", number);
		for(int j = 0; j < space; j++)
			printf(" ");
		printf("%d\n", number--);
		space += 2;
	}
	return 0;
}
