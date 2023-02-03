#include <stdio.h>
int main(){
    printf("Enter the rows counter = ");
    int row;
    scanf("%d", &row);
    printf("\n");
    for(int i = 0; i < row; i++){
        int c = 1;
        for(int j = 0; j < row - i; j++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            printf(" %d  ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}