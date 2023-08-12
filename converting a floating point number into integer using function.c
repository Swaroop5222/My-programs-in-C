#include<stdio.h>

int integer(int);

int main(){
float f;
printf("Enter the floating point value of f \n");
scanf("%f",&f);
integer(f);
return 0;
}
int integer(int f){
int i;
i=(int)f;
printf("The value of %lf in integer is %d",f,i);

}
