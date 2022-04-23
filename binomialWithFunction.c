#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int binomial(int total, int n, int x, int y){
	int process = 1;
	int temp = n;
	int permanent = n;
	int up = permanent;
	int down = 1;
	while(n >= 0){
		temp -= (permanent - n);
		process *= pow(x,temp) * pow(y,permanent - temp);
		down = 1;
		while(up > n){
			process *= up;
			process /= down;
			down++;
			up--;
		}
		up = permanent;
		temp = permanent;
		total += process;
		process = 1;
		n--;
	}
	return total;
}
int main(){
	int total = 0;
	int n = 4;
	int x = 2;
	int y = 2;
	printf("Result = %d",binomial(total,n,x,y));
	return 0;
}
