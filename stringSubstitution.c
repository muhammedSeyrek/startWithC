#include <stdio.h>
#include <string.h>
int main()
{
    char dizi[5][20]= {"kalem","silgi","cetvel","telefon","bilgisayar"};
    char gecici[20];
    int uzunluk,i,j;
    strcpy(gecici,dizi[0]);
    for(i=0;i<4;i++){
    	strcpy(dizi[i],dizi[i+1]);
	}
	strcpy(dizi[i],gecici);
	for(i=0;i<5;i++){
		uzunluk=strlen(dizi[i]);
		if(i%2==0){
			for(j=0;j<uzunluk/2;j++){
				gecici[j]=dizi[i][j];
				dizi[i][j]=dizi[i][uzunluk-j-1];
				dizi[i][uzunluk-1-j]=gecici[j];
			}
		}
		if(i%2==1){
			gecici[0]=dizi[i][0];
			for(j=0;j<uzunluk-1;j++){
				dizi[i][j]=dizi[i][j+1];
			}
			dizi[i][uzunluk-1]=gecici[0];
		}
		printf("%s\n",dizi[i]);
	}
	return 0;
}
