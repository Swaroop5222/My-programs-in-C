#include<stdio.h>
void area(int*, int*);
int main(){
int b, h;
printf("Enter the value of base\n");
scanf("%d",&b);
printf("Enter the value of height\n");
scanf("%d",&h);
area(&b,&h);

return 0;
}
void area(int*a, int*b){
printf("The area of triangle is %f",0.5*(*a)*(*b));
}

