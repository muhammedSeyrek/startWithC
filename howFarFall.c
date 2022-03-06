#include<stdio.h>
#include<math.h>
void fallTime(float,int,float);
int main(float firstSpeed,int launchAngle,float theFallTime){
	printf("Enter the first speed (m/s) = ");
	scanf("%f",&firstSpeed);
	printf("Enter the angle (degree) = ");
	scanf("%d",&launchAngle);
	fallTime(firstSpeed,launchAngle,theFallTime);	
	return 0;
}
void fallTime(float firstSpeed,int launchAngle,float theFallTime){
	theFallTime = 1.0;
	theFallTime = firstSpeed * (2.0 * (firstSpeed * (sin(launchAngle * M_PI/180)) / 9.80) *
	(cos (launchAngle * M_PI/180)));
	printf("%.2f m falls the far",theFallTime);
}
