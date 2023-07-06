#include <stdio.h>

float penny[4][2] = {{1.0, 10.2}, {0.5, 4.4}, {0.25, 2.1}, {0.1, 0.9}};
float count[4] = {1.0, 1.0, 1.0, 1.0};
float weight[4] = {1.0, 1.0, 1.0, 1.0};
int countInMoney[4] = {0, 0, 0, 0};
float money = 105.95;

int greater(int i, int index){
	if(i > 3)return index;
	if(penny[i][0] >= penny[index][0])index = i;
	return greater(i + 1, index);
}

int smallest(int i, int index, float array[]){
	if(i > 3)return index;
	if(array[i] < array[index]){
		index = i;
		return smallest(i + 1, index, array);
	}
	else return smallest(i + 1, index, array);
}

void checkCount(int x, float greaterMoney){
	if(x > 3) return;
	count[x] = (greaterMoney / penny[x][0]);
	checkCount(x + 1, greaterMoney);
}

void checkWeight(int x){
	if(x > 3) return;
	weight[x] = (penny[x][1] * count[x]);
	checkWeight(x + 1);
}

void process(int one, int fifty, int array[]){
	int counts = 0;
	while(money > 0.0){
		printf("%.2f\n", money);
		int value = smallest(0, 0, array);
		int flag = 1;
		while(money - penny[value][0] >= 0.0){
			flag = 0;
			if((penny[value][0] == 1.0 && one == 0) || (penny[value][0] == 0.5 && fifty == 0)){
				count[value] += 100.0;
				break;
			}
			else
				money -= penny[value][0];
			if(penny[value][0] == 1.0) one--;
			if(penny[value][0] == 0.5) fifty--;
			countInMoney[value]++;
		}
		if(money < 0.25){
			while(money > 0.0){
				money -= 0.1;
				countInMoney[3]++;
			}
		}
		if(flag == 1)
			count[value] += 100.0;
	}
}

int main(){
	float greaterMoney = penny[greater(0, 0)][0];
	checkCount(0, greaterMoney);
	checkWeight(0);
	printf("What is the action you want ?\n");
	printf("1 - Few coins\n2 - Less Weight\n");
	int choose;
	printf("Choose = ");
	scanf("%d", &choose);
	if(choose == 1){
		process(80, 50, count);
		for(int i = 0; i < 4; i++){
			printf("%.2f penny count = %d\n", penny[i][0], countInMoney[i]);
		}
		printf("\n%.2f", money * -1);
	}
	else if(choose == 2){
		process(80, 50, weight);
		for(int i = 0; i < 4; i++){
			printf("%.2f penny count = %d\n", penny[i][0], countInMoney[i]);
		}
		printf("\n%.2f", money * -1);
	}
			
	
	return 0;
}
