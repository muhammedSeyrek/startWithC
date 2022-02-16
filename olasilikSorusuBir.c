#include<stdio.h>
#include<time.h>
#include<string.h>
int main(){
	double I[3]={0},A[3][3]={0},B[3][2]={0};
	int random = 7;
	int i,j;
	srand(time(0));
	for(i=0;i<2;i++){
		I[i]=(rand()%random)/10.0+0.1;
		random=(I[i]*10)-random;
	}
	I[2]=(1.0-(I[0]+I[1]));
	for(i=0;i<3;i++){
		printf("%.1f\n",I[i]);
	}
	for(i=0;i<3;i++){
		random = 7;
		for(j=0;j<2;j++){
			A[i][j]=rand()%random/10.0+0.1;
			random=(A[i][j]*10)-random;
		}
		A[i][2]=(1.0-(A[i][0]+A[i][1]));
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%.1f ",A[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<3;i++){
		random = 7;
		for(j=0;j<1;j++){
			B[i][j]=rand()%random/10.0+0.1;
			random=(B[i][j]*10)-random;
		}
		B[i][1]=(1.0-(B[i][0]+B[i][1]));
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%.1f ",B[i][j]);
		}
		
		printf("\n");
	}
	
	
	
	float hAlpha=1.0;
	hAlpha = (I[0])*(A[0][2]*B[2][1])*(A[2][1]*B[1][0]);
	printf("Alpha = %f",hAlpha);
	
	
	
	
	
	
	
	
	return 0;
}
