#include<stdio.h>
#include<math.h>
float G = 6.673*pow(10,-11);
void gravitationalForce(float,float,float,float);
int main(float m1,float m2,float r,float f){
	printf("Enter m1's weight (kg) = ");
	scanf("%f",&m1);
	printf("Enter m2's weight (kg) = ");
	scanf("%f",&m2);
	printf("Enter the distance between objects (m) = ");
	scanf("%f",&r);
	gravitationalForce(m1,m2,r,f);
	return 0;
}
void gravitationalForce(float m1,float m2,float r,float f){
	f=(G*(m1*m2))/pow(r,2);
	printf("Gravity Force = %.20f Newton",f);	
}
