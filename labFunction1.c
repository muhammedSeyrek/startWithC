#include<stdio.h>
void fibonacci(int,int,int,int);
void main(temp,longer){	
	int fi = 1;
	int mi = 0;
	printf("what long = ");
	fibonacci(fi,mi,longer,temp);
}
void fibonacci(int fi,int mi,int longer,int temp){
	scanf("%d",&longer);
	while(fi<longer){
		temp=fi;
		fi+=mi;
		mi=temp;
		printf("%d ",fi);
	}
	
}
