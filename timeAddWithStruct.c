#include<stdio.h>
#include<stdlib.h>
struct time{
	int hour;
	int minute;
	int second;
};
	struct time Tm;
void proccessTime(int addSecond){
	printf("Enter the time = ");
	scanf("%d %d %d",&Tm.hour,&Tm.minute,&Tm.second);
	Tm.second += addSecond;
	if(Tm.second >= 60){
		if(Tm.minute >= 60){
			if(Tm.hour >= 24){
				Tm.hour -= 24;
			}
			Tm.minute -= 60;
			Tm.hour += 1;
			if(Tm.hour >= 24){
				Tm.hour -= 24;
			}
		}
		Tm.second -= 60;
		Tm.minute += 1;
		if(Tm.minute >= 60){
			if(Tm.hour >= 24){
				Tm.hour -= 24;
			}
			Tm.minute -= 60;
			Tm.hour += 1;
			if(Tm.hour >= 24){
				Tm.hour -= 24;
			}
		}
	}
}
int main(){
	int addSecond;
	printf("Enter the second to be added = ");	
	scanf("%d",&addSecond);
	proccessTime(addSecond);
	printf("New Time = %d/%d/%d",Tm.hour,Tm.minute,Tm.second);
	return 0;
}
