#include<stdio.h>


int time(int, int);

int main(){
int hours, minutes;
printf("\n enter the value of hours ");
scanf("%d",&hours);
printf("\n enter the value of minutes ");
scanf("%d",&minutes);
printf("\n total minutes is %d",time(hours, minutes));
return 0;
}
int time(int hours, int minutes){

return hours*60+minutes;

}
