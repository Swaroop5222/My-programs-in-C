#include<stdio.h>

int is_prime(int);

int main(){
int a;
printf("enter the value of a ");
scanf("%d",&a);
printf("%d",is_prime(a));
return 0;
}
int is_prime(int a)
{
    if(a%1==0 && a%a==0 && a%2!=0)
        return 1;
    if(a==2)
        return 1;
    if(a%1==0 && a%a==0 && a%2==0)
        return 0;
}
