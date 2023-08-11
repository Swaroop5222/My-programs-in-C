#include<stdio.h>


int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float division(int, int);

int main(){
int a, b;
printf("\n enter the value of a ");
scanf("%d",&a);
printf("\n enter the value of b ");
scanf("%d",&b);
printf("sum is %d\n",addition(a, b));
printf("the answer is %d\n",subtraction(a, b));
printf("product is %d\n",multiplication(a, b));
printf("the quotient is %d",division(a, b));

return 0;
}
int addition(int a, int b){
return a+b;
}
int subtraction(int a, int b){
return a-b;
}
int multiplication(int a, int b){
return a*b;
}
float division(int a, int b){
return a/b;
}
