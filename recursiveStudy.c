#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int factorialRec(int number){
	if(number > 1)
		return number * factorialRec(number - 1);
}


int fibonacciRec(int fib){
	if(fib < 3)
		return 1;
	
	return fibonacciRec(fib - 1) + fibonacciRec(fib - 2); 
}

int sumArrayRec(int array[], int size){
	if(size < 0)
		return array[size];	
	return array[size] + sumArrayRec(array, size - 1);
}

int greatestNumber(int array[], int size, int index){
	if(size < 0)
		return array[index];
	if(array[index] < array[size])
		index = size;
	return greatestNumber(array, size - 1, index);
}

int calcTextCount(char text[], int count){
	if(text[count] == NULL)
		return count;
	return calcTextCount(text, count + 1);
}

int combinationRec(int number, int degree){
	if(degree < 1)
		return 1;
	return number * combinationRec(number - 1, degree - 1) / degree;
}

int powRec(int base, int power){
	if(power == 0)
		return 1;
	return base * powRec(base, power - 1);
}


int main(){
	srand(time(NULL));
	
	printf("Factorial = %d\n\n", factorialRec(5));
	
	int fib = 7;
	printf("Fibonacci %d.Value = %d\n\n", fib, fibonacciRec(fib));
	
	//Dizi elemanlarini toplayan rekürsif fonksiyon
	int size = 10;
	int array[size];
	for(int i = 0; i < size; i++){
		array[i] = rand() % 10 + 1;
		printf("%d ", array[i]);
	}
	
	printf("Greatest number = %d", greatestNumber(array, size - 1, size - 1));
	
	int sum = sumArrayRec(array, size - 1);
	printf("\nSum of arrays = %d\n\n", sum);
	
	
	
	
	//Bir metindeki karakter sayisini hesaplayan rekürsif fonksiyonu
	char text[] = "Muhammed Seyrek";
	printf("This counts of the text -> %d = %s\n\n", calcTextCount(text, 0), text);
	
	
	int n, r;
	printf("Enter number = ");
	scanf("%d", &n);
	printf("Enter degree = ");
	scanf("%d", &r);
	printf("Combination = %d\n\n", combinationRec(n, r));
	
	
	int base, power;
	printf("Enter a base number = ");
	scanf("%d", &base);
	printf("Enter a power number = ");
	scanf("%d", &power);
	printf("Result = %d\n\n", powRec(base, power));
	
	
	
	
	
	
	
	return 0;
}
