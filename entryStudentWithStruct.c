#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct information{
	char department[20];
	int grade;
};
struct student{
	char name[10];
	char surname[10];
	float avg;
	struct information info;
}st[100],temp;
void recordStudent(int x){
	int i;
	for(i = 0; i < x; i++){
		printf("Enter the name of the student = ");
		scanf("%s",st[i].name);
		printf("Enter the surname of the student = ");
		scanf("%s",st[i].surname);
		printf("Enter the avg of the student = ");
		scanf("%f",&st[i].avg);
		printf("Enter the department and grade of the student = ");
		scanf("%s %d",st[i].info.department,&st[i].info.grade);
	}
}
void sorting(int x){
	int i, j;
	for(i = 0; i < x; i++){
		for(j = 0; j < x - 1; j++){
			if(strcmp(st[j].surname,st[j + 1].surname) > 0){
				temp = st[i];
				st[i] = st[i + 1];
				st[i + 1] = temp;
			}
		}
	}
}
void printScreen(int x){
	int i;
	for(i = 0; i < x; i++){
		printf("Name = %s\n",st[i].name);
		printf("Surname = %s\n",st[i].surname);
		printf("Student's Avg = %.2f\n",st[i].avg);
		printf("Student's Department:%s - Grade:%d\n",st[i].info.department,st[i].info.grade);
	}
}
int main(){
	int i;
	printf("Enter the counter student = ");
	scanf("%d",&i);
	printf("\n");
	recordStudent(i);
	printf("\nRegistration Successful\n\n\n");
	printScreen(i);
	printf("\n\n\n");
	sorting(i);
	FILE *fPtr;
	fPtr = fopen("studentRecordFile.txt","w");
	if(fPtr == NULL){
		printf("\n\nRegistration Unsuccessful\n\n\n");
	}
	int j;
	for(j = 0; j < i; j++){
		fprintf(fPtr,"Name = %s\nSurname = %s\nAvg = %.2f\nStudent's Department - Grade = %s - %d\n",
		st[j].name,st[j].surname,st[j].avg,st[j].info.department,st[j].info.grade);
	}
	fclose(fPtr);
	printScreen(i);
	return 0;
}
