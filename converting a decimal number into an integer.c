#include<stdio.h>

int main(){
float a;
int n;
int *ptr2=&n;
printf("Enter the value of a\n");
scanf("%f",&a);
float *ptr;
ptr=&a;
*ptr2=(int)*ptr;
printf("The value in integer is %d",*ptr2);
return 0;
}
