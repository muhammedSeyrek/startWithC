#include<stdio.h>
int main(){
	int i, j, k, a = 3;
	int asal[10];
	asal[1] = 2;
	for(k = 2; k < 10; k++){
		asal[k] = 1;
		do{
			j = 1;
			while(a % asal[j] != 0) j++;
			if(k == j) asal[k] = a;
			a = a + 2;
		}while(asal[k] == 1);
	}
	for(i = 1; i < 10; i++){
		printf("%d ", asal[i]);
	}
	return 0;
}
