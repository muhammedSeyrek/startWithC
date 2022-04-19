#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sorting(float *a, float *b, float *c){
	if(*a > *b){
		float temp1 = *a;
		*a = *b;
		*b = temp1;
		if(*b > *c){
			float temp3 = *b;
			*b = *c;
			*c = temp3; 
		}
	}else{
		if(*a > *c){
			float temp5 = *a;
			*a = *c;
			*c = temp5;
			if(*b > *c){
				float temp2 = *b;
				*b = *c;
				*c = temp2;
			}else{
				float temp4 = *b;
				*b = *c;
				*c = temp4;
			}
		}else{
			if(*b > *c){
				float temp2 = *b;
				*b = *c;
				*c = temp2;
			}else{
				float temp4 = *b;
				*b = *c;
				*c = temp4;
			}
		}
	}
}
int main(){
	float a,b,c;
	printf("Enter the first number = ");
	scanf("%f",&a);
	printf("Enter the second number = ");
	scanf("%f",&b);
	printf("Enter the third number = ");
	scanf("%f",&c);
	sorting(&a,&b,&c);
	printf("Numbers with sorting = %.2f , %.2f , %.2f",a,b,c);
	return 0;
}
