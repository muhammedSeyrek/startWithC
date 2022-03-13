#include<stdio.h>
int recursive(int,int);
int main(){
	int number;
	int perm;
	printf("Enter the perm number = ");
	scanf("%d",&number);
	printf("Enter the perm number degree = ");
	scanf("%d",&perm);
	printf("Permutation = %d",recursive(number,perm));
	return 0;
}
int recursive(int number,int perm){
	if(perm == 0){
		return 1;
	}
	else
	return number*recursive(number - 1,perm - 1);	
}
