#include<stdio.h>

int one(int);

int main(){
    int num;
printf("Enter the value of num\n");
scanf("%d",&num);

one(num);
return 0;
}
int one(int num){
int remainder;
remainder=num%10;

printf("The digit at one's place is %d",remainder);

}
