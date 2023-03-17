#include <stdio.h>
void a(){
	printf("* * * *\t");
}
void b(){
	printf("*     *\t");
}
void c(){
	printf("*      \t");
}
void d(){
	printf("      *\t");
}
void main(){
	printf("Enter a number, please = ");
	int number;
	scanf("%d", &number);
	int x = 0;
	int temp = number;
	while(temp > 0 && x++ >= 0) temp /= 10;
	int numbers[x];
	for(int i = 0; i < x; i++){
		numbers[i] = number % 10;
		number /= 10; 	
	} 
	int flag = 0;
	for(int i = 0; i < 5; i++){
		int value = 1;
		if(i % 2 != 0) value = 2;
		while(value != 0){
			for(int j = (sizeof(numbers) / 4) - 1; j >= 0 ; j--){
				switch(numbers[j]){
					case 0:
						if(i % 2 == 0 && i != 2) a();
						if(i % 2 != 0) b();
						if(i == 2) b();
						break;
					case 1:
						d();
						break;
					case 2:
						if(i % 2 == 0) a();
						else if(i == 1) d();
						else c();
						break;
					case 3:
						if(i % 2 == 0) a();
						else d();
						break;
					case 4:
						if(i == 0) b();
						else if(i == 1) b();
						else if(i == 2) a();
						else if(i == 3) d();
						else d();
						break;
					case 5:
						if(i % 2 == 0) a();
						else if(i == 1) c();
						else d();
						break;
					case 6:
						if(i % 2 == 0) a();
						else if(i == 1) c();
						else b();
						break;	
					case 7:
						if(i == 0) a();
						else if(i % 2 != 0) d();
						else d();
						break;
					case 8:
						if(i % 2 == 0) a();
						else b();
						break;
					case 9:
						if(i % 2 == 0) a();
						else if(i == 1) b();
						else d();
						break;				
					default: break;
				}				
			}
			printf("\n");
			value--;
		}
	}
}
