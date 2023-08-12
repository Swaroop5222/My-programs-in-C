#include<stdio.h>

int fact(int);


int main(){

int a;
printf("enter the value of a ");
scanf("%d",&a);
printf("factorial of %d is %d",a, fact(a));


return 0;
}
int fact(int a){
    if(a==1)
        return 1;
    else
return (a*fact(a-1));

}
