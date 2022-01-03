#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int takvim[21][12][31][20];
	char aylar[12][20]={"Ocak","Subat","Mart","Nisan","Mayis",
	"Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik"};
	char gunler[7][20]={"Cumartesi","Pazar","Pazartesi",
	"Sali","Carsamba","Persembe","Cuma"};
	int i,j,k,sayac=0;
	for(i=0;i<21;i++){
		for(j=0;j<12;j++){
			for(k=0;k<31;k++){		
					
					if(j==0||j==2||j==4||j==6||j==7||j==9||j==11){
						sprintf(takvim[i][j][k],"%d %s %d %s",k+1,aylar[j],i+2000,gunler[sayac%7]);
						sayac++;
					}
					if(j==3||j==5||j==8||j==10){
						if(k<=29){
							sprintf(takvim[i][j][k],"%d %s %d %s",k+1,aylar[j],i+2000,gunler[sayac%7]);
							sayac++;
						}else{
							sprintf(takvim[i][j][k],"%s","NULL");
							
						}
					}
					if(j==1){
						if(k<=27 || k==28 && (i+2000)%4==0){
							sprintf(takvim[i][j][k],"%d %s %d %s",k+1,aylar[j],i+2000,gunler[sayac%7]);
							sayac++;
						}else{
							sprintf(takvim[i][j][k],"%s","NULL");
							
						}
					}
					
					printf("%s\n",takvim[i][j][k]);
				
			}
		}
	}
	return 0;
}
