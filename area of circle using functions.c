#include<stdio.h>


float area(int);

int main(){
int r;
printf("\nEnter the value of radius ");
scanf("%d",&r);
printf("\narea of circle is %f",area(r));



return 0;
}
float area(int r){
int a=3.14*r*r;
return a;
}
