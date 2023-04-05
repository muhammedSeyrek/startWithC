#include <stdio.h>
int total = 0;
int sumF(int start, int end){
	if(start > end)
		return 0;
	if(start % 3 == 0){
		total += start;
		printf("%d\n", start);
	}
	return sumF(start + 1, end);
}
int main(){
	int start, end;
	printf("Enter the starting number = "); scanf("%d", &start);
	printf("Enter the ending number = "); scanf("%d", &end);
	sumF(start, end);
	printf("The sum of the numbers divisible by 3 between %d and %d is : %d", start, end, total);
	return 0;
}
