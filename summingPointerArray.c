#include<stdio.h>
#include<stdlib.h>
void sum(int *array1, int *array2){
	int i;
	for(i = 0; i < 5; i++){
		*(array2 + i) = *(array1 + i) + *(array2 + i);
	}	
}
int main(){
	int array1[5], array2[5];
	int *ptr1 = &array1[0];
	int *ptr2 = &array2[0];
	int i;
	for(i = 0; i < 5; i++){
		printf("Please enter the numbers for array1 = ");
		scanf("%d",&ptr1[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Please enter the numbers for array2 = ");
		scanf("%d",&ptr2[i]);
	}
	for(i = 0; i < 5; i++){
		printf("%d ",*(ptr1 + i));
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d ",*(ptr2 + i));
	}
	sum(ptr1,ptr2);
	
	printf("\n------------\n");
	for(i = 0; i < 5; i++){
		printf("%d ",*(ptr2 + i));
	}
	return 0;
}
