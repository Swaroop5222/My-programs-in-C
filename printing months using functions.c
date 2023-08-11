#include<stdio.h>

void month();

int main(){
month();


return 0;
}
void month(){
int a;
printf("\n enter the value of a ");
scanf("%d",&a);

if(a==1)
 printf("january\n");
 if(a==2)
    printf("february");
 if(a==3)
    printf("march\n");
 if(a==4)
    printf("april");
 if(a==5)
    printf("may");
 if(a==6)
    printf("june");
 if(a==7)
    printf("july");
 if(a==8)
    printf("august");
 if(a==9)
    printf("september");
 if(a==10)
    printf("october");
 if(a==11)
    printf("november");
 if(a==12)
    printf("december");
 if(a>12)
    printf("not valid");





}
