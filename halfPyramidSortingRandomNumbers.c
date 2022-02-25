#include<stdio.h>
int main(){
	srand(time(0));
	int array[10],temp,circle=100;
	int i;
	int a,b;
	for(i=0;i<10;i++){
		array[i]=rand()%20;
	}
	while(circle>0){
		for(i=0;i<10;i++){
			if(array[i]>array[i+1]){
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		circle--;
	}
	i=0;
	while(i<10){
		for(a=0;a<5;a++){
			for(b=0;b<a;b++){
				printf("%d ",array[i]);
				i++;
			}
			printf("\n");
		}
	}
	return 0;
}
