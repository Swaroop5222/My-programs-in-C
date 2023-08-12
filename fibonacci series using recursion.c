#include<stdio.h>

int fib(int);

int main(){
int a;
printf("enter the value of a ");
scanf("%d",&a);
printf("the value is %d",fib(a));


return 0;
}
int fib(int a){
if(a==1)
    return 1;
if(a==2)
    return 1;
else
    return(fib(a-1)+fib(a-2));

}
