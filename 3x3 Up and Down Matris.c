#include <stdio.h>
int main(){
	int matris[3][3],i,j,toplamUst=0,toplamAlt=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("matris elemanini girin [%d][%d] :",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			toplamAlt+=matris[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j>i){
				toplamUst+=matris[i][j];
			}
		}
	}	
	if(toplamUst>toplamAlt){
		printf("Ust Ucgen Matrisi\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(j>=i){
					printf("%d ",matris[i][j]);
				}else{
					printf("  ");
				}
			}
			printf("\n");
		}
	}else{
		printf("Alt Ucgen Matrisi\n");
		for(i=0;i<3;i++){
			for(j=0;j<=i;j++){
				printf("%d ",matris[i][j]);
			}
			printf("\n");
		}
	}
 	return 0;
}
