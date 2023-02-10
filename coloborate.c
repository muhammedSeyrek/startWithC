#include <stdio.h>
#include <string.h>
int main(){
    int dayF1, dayF2, dayF3, space1 = 6, space2, space3;
    printf("\n\n");
    for(int i = 0; i < 4; i++){
        int day1 = 1, day2 = 1, day3 = 1;
        if(i == 0) dayF1 = 31; dayF2 = 28; dayF3 = 31;
        if(i == 1) dayF1 = 30; dayF2 = 31; dayF3 = 30;
        if(i == 2) dayF1 = 31; dayF2 = 31; dayF3 = 30;
        if(i == 3) dayF1 = 31; dayF2 = 30; dayF3 = 31;
        if(i == 0) printf("\nColoborate of the 2023\n\n\n\t  January\t\t\t\t\t  February\t\t\t\t\t   March\n\n");
        if(i == 1) printf("\t  April\t\t\t\t\t\t    May\t\t\t\t\t\t   June\n\n");
        if(i == 2) printf("\t  June\t\t\t\t\t\t   July\t\t\t\t\t\t  August\n\n");
        if(i == 3) printf("\t  October\t\t\t\t\t  November\t\t\t\t\t  December\n\n");
        int once = 0;
        while(day1 <= dayF1 || day2 <= dayF2 || day3 <= dayF3){
            if(once == 0){
                space2 = (space1 + dayF1) % 7;
                space3 = (space2 + dayF2) % 7;
                for(int k = 0; k < space1; k++)
                    printf("    ");
                for(int k = 0; (space1 + day1) <= 7; k++)
                    printf(" %d  ", day1++);
                space1 = (space3 + dayF3) % 7;
                printf("\t\t\t");
                for(int k = 0; k < space2; k++)
                    printf("    ");
                for(int k = 0; (space2 + day2) <= 7; k++)
                    printf(" %d  ", day2++);
                printf("\t\t\t");
                for(int k = 0; k < space3; k++)
                    printf("    ");
                for(int k = 0; (space3 + day3) <= 7; k++)
                    printf(" %d  ", day3++);
                printf("\n");
                once = 1;
            }
            int k;
            if(day1 <= dayF1){
                for(k = 0; k < 7 && day1 <= dayF1; k++)
                    if(day1 < 10)
                        printf(" %d  ", day1++);
                    else 
                        printf("%d  ", day1++);
                if(k != 7)
                    while(k < 7){
                        printf("    ");
                        k++;
                    }
            }
            printf("\t\t\t");
            if(day2 <= dayF2){
                for(k = 0; k < 7 && day2 <= dayF2; k++)
                    if(day2 < 10)
                        printf(" %d  ", day2++);
                    else 
                        printf("%d  ", day2++);
                if(k != 7)
                    while(k < 7){
                        printf("    ");
                        k++;
                    }
            }
            printf("\t\t\t");
            if(day3 <= dayF3){
                 for(k = 0; k < 7 && day3 <= dayF3; k++)
                    if(day3 < 10)
                        printf(" %d  ", day3++);
                    else 
                        printf("%d  ", day3++);
                if(k != 7)
                    while(k < 7){
                        printf("    ");
                        k++;
                    }
            }
            printf("\n");
        }
        printf("\n\n\n\n");
    }
    return 0;       
}
