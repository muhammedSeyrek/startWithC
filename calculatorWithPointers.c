#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void dataTake(char *operation, int *ptrX){
        printf("Enter the operation and number = \n");
        scanf(" %c", operation);
        scanf("%d",ptrX);
}
void process(int x, char operation, int *result){
        if(operation == '+')
            *result += x;
        else if(operation == '-')
            *result -= x;
        else if(operation == '^')
            *result = pow(*result,x); 
        else if(operation == '*')
            *result *= x;
        else if(operation == '/')
            *result /= x; 
        else if(operation == 'm')
            *result = *result % x;
}
int main(){
    int x;
    char giveChar;
    int total = 0;
    do{ 
       dataTake(&giveChar, &x);
       process( x, giveChar, &total);
       printf("Result = %d\n",total); 
    }while(giveChar != 'q');
    return 0;
}
