#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
	int takvim[20][12][31][20];
	char aylar[12][20]={"Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos",
	"Eylul","Ekim","Kasim","Aralik"};
	char gun[7][20];
	char gunler[7][20]={"Pazar","Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi"};
	int i,j,k,sayac=0,x=0;
	int ilk,orta,son;
	char cevap,soruCevap[20];
	do{	
	srand(time(NULL));//burada rastgele sayýlar alarak random tarih atamaya çalýþacaðýz.
	ilk=rand()%20+1;
	orta=rand()%12+1;
	son=rand()%31+1;
	for(i=0;i<20;i++){
		for(j=0;j<12;j++){
			for(k=0;k<31;k++){
				if(j==0 || j==2 || j==4 || j==6 || j==7 || j==9 || j==11){
					sprintf(takvim[i][j][k],"%d %s %d ",k+1,aylar[j],i+1922);
					sprintf(gun[sayac%7],"%s",gunler[sayac%7]);
					sayac++;	
				}
				if(j==3 || j==5 || j==8 || j==10){
					if(k<=29){
						sprintf(takvim[i][j][k],"%d %s %d ",k+1,aylar[j],i+1922);
						sprintf(gun[sayac%7],"%s",gunler[sayac%7]);
						sayac++;
					}
					else{
						sprintf(takvim[i][j][k],"%s","Null");
					}	
				}
				if(j==1){
					if(k<=27 || k==28 && (i+1922)%4==0){
						sprintf(takvim[i][j][k],"%d %s %d ",k+1,aylar[j],i+1922);
						sprintf(gun[sayac%7],"%s",gunler[sayac%7]);
						sayac++;
					}
					else{
						sprintf(takvim[i][j][k],"%s","Null");
					}
				}
				if(takvim[i][j][k]==takvim[ilk][orta][son]){
					sayac--;
					i=21;
					j=13;
					k=32;
				}	
			}				
		}
	}
	int sayi=1,ayUzunluk;
	if(orta==0 || orta==2 || orta==4 || orta==6 || orta==7 || orta==9 || orta==11){
		ayUzunluk=31;
	}
	if(orta==3 || orta==5 || orta==8 || orta ==10){
		ayUzunluk=30;
	}
	if(orta==1){
		if((ilk+1922)%4==0){
			ayUzunluk=29;
		}
		else{
			ayUzunluk=28;
		}
	}
	printf("Ipucu : %d\n",sayac%7);
	printf("%s hangi gune denk gelmektedir:\n",takvim[ilk][orta][son]);
	printf("Pt Sa Ca Pr Cu Ct Pz\n");
	int donguIcin;
	donguIcin=(sayac-son-1)%7;
	while(donguIcin>0){
		printf("   ");
		donguIcin--;
	}
	donguIcin=(sayac-son-1)%7;
	while(sayi<=ayUzunluk){
		for(i=0;i<=7;i++){
			if(i<=donguIcin){
				printf("");
			}else{
				if(sayi<=ayUzunluk){
					printf("%2d ",sayi);
					sayi++;
				}
			}
		}
		donguIcin=0;
		printf("\n");
	}
	int kabul;
	scanf("\n%s",&soruCevap);
	kabul = strcmp(soruCevap,gun[sayac%7]);
	if(kabul==0){
		printf("Dogru Cevap\n");
	}else{
		printf("Yanlis Cevap!!!");
		printf("Gunu %s\n",gun[sayac%7]);
	}
		printf("Oyuna devam etmek istiyorsaniz herhangi bir tus,ayrilmak icin 'h' veya 'H'\n");
		scanf("%s",&cevap);
		if(cevap=='H'||cevap=='h'){
			x++;
		}else{
			x=0;
		}
		printf("\n\n\n");	
	}
	while(x<=0);
	printf("\n\n\n");
	printf("Oyun bitmistir,tesekkurler\n");
	printf("Designer:Mete Ozbaltan\tDeveloper:Muhammed Seyrek\tVersionNumber:007");
	return 0;
}
