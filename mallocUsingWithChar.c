#include <stdio.h>
#include <stdlib.h>
void print(char **names, int count){
	for(int i = 0; i < count; i++)
		printf("%s  ", names[i]);
}
void memoryUnload(char **names){
	free(names);
}
int main(){
	int personC;
	printf("Enter a student count:"); scanf("%d", &personC);
	char **names = (char**) malloc(personC * sizeof(char*));//I reserve memory for number of contacts
	for(int i = 0; i < personC; i++){
		names[i] = (char*) malloc(10 * sizeof(char));//I reserve memory for person name
		scanf("%s", names[i]);
	}
	printf("This Students = ");
	print(names, personC);
	memoryUnload(names);
	return 0;
}
