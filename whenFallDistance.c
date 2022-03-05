#include<stdio.h>
#include<math.h>
void totalTime(float,int,float);
int main(float firstSpeed,int angle,float objectFall){
	printf("Enter the first speed (m/s) = ");
	scanf("%f",&firstSpeed);
	printf("Enter the of object angle (degree) = ");
	scanf("%d",&angle);
	totalTime(firstSpeed,angle,objectFall);
	return 0;
}
void totalTime(float firstSpeed,int angle,float objectFall){
	objectFall = 1.0;
	objectFall *= 2.0 * (((firstSpeed * sin(angle * M_PI/180)) / 9.80));
	printf("The object falls to the ground after %.3f seconds.",objectFall);
}
