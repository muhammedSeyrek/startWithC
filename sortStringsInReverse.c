#include<stdio.h>
int main(){
	int array[]={10,20,30,40,50,60,70,80,90,100};
	int temp,i,dimension=sizeof(array)/sizeof(int);
	for(i=0;i<dimension/2;i++){
		temp=array[i];
		array[i]=array[dimension-1-i];
		array[dimension-1-i]=temp;
	}
	for(i=0;i<dimension;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
