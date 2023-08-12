#include<stdio.h>

int gcd(int, int);


int main(){
int a, b;
printf("enter the value of a ");
scanf("%d",&a);
printf("enter the value of b ");
scanf("%d",&b);
printf("gcd of %d and %d is %d",a ,b, gcd(a,b));

return 0;
}
int gcd(int a, int b){
if(a%b==0)
    return a;
else
    return(b, (a%b));


}
