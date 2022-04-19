#include<stdio.h>
int split(int *number, int *splitNumber){
	int i = 0;
	*splitNumber = *number % 10;
	*number /= 10;
}
int main(){
	char str[4][10] = {"the ones","they","faces","thousand"};
	int number = 1576;
	int consNumber = number;
	int splitNumber = 0;
	int i = 0;
	while(i < 4){
		split(&number,&splitNumber);
		printf("%s digit of the number %d = %d\n",str[i],consNumber,splitNumber);
		i++;
	}
}
