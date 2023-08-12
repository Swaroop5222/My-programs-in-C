#include<stdio.h>

int main(){
int r;
printf("Enter the value of r\n");
scanf("%d",&r);
int *ptr;
ptr=&r;
printf("Area of circle with radius %d is %f\n",r,3.14*(*ptr)*(*ptr));
return 0;
}
