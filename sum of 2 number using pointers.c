#include<stdio.h>

int main(){
float a, b;
printf("Enter the value of a\n");
scanf("%f",&a);
printf("Enter the value of b\n");
scanf("%f",&b);
float *ptr1, *ptr2;
ptr1=&a;
ptr2=&b;
printf("sum of %f and %f is %f",a,b,(*ptr1+*ptr2));
return 0;
}
