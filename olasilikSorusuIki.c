#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int i,j,random;
	float I[3]={0},A[3][3]={0},B[3][2]={0};
	random = 6;
	for(i=0;i<2;i++){
		I[i]=rand()%random/10.0+0.2;
		random=(I[i]*10)-random-1;
	}
	I[2]=(1.0-(I[0]+I[1]));
	
	for(i=0;i<3;i++){
		random = 6;
		for(j=0;j<2;j++){
			A[i][j] = rand()%random/10.0+0.2;
			random=(A[i][j]*10)-random-1;
		}
		A[i][2]=(1.0-(A[i][0]+A[i][1]));
	}
	
	for(i=0;i<3;i++){
		random = 6;
		for(j=0;j<1;j++){
			B[i][j]=rand()%random/10.0+0.2;
			random=(B[i][j]*10)-random-1;
		}
		B[i][1]=(1.0-B[i][0]);
	}



	for(i=0;i<3;i++){
		printf("%.2f ",I[i]);
	}
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%.2f ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%.2f ",B[i][j]);
		}
		printf("\n");
	}

	float hAlpha = 1.0;

	hAlpha = I[1]*(A[1][1]*B[1][1])*(A[1][2]*B[2][1])*(A[0][0]*B[0][0]);
	printf("\n");
	printf("Alpha = %f",hAlpha);
	
	

	return 0;
}
