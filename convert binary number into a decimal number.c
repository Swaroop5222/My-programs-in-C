#include<stdio.h>
#include<math.h>

int main(){
int i=0, num, temp, rem, dec=0;
printf("Enter any binary number\n");
scanf("%d",&num);
temp=num;
while(temp>0){
    rem=temp%10;
    dec=dec+rem*(pow(2,i));
    i++;
    temp=temp/10;

}
printf("The decimal number is %d\n",dec);

return 0;
}
