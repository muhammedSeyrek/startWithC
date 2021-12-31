#include <stdio.h>
int main() {
	srand(time(NULL));
    int dizi[10],i,toplam;
    for(i=0;i<10;i++){
    	dizi[i]=rand()%3;
	}
	for(i=0;i<10;i++){
		if(dizi[i]==2){
			toplam+=3;
		}
		else if(dizi[i]==1){
			toplam+=0;
		}
		else{
			toplam+=1;
		}
	}	
	if(toplam>=12){
		printf("Kumeye dusmedi\n");
	}else{
		printf("Kumeye Dustu\n");
	}
	printf("toplami %d:",toplam);
	
	for(i=0;i<10;i++){
		printf("|%d|",dizi[i]);
	}
   	return 0; 
}
