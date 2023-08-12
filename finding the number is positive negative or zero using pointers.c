#include<stdio.h>

int main(){
int a;
int *ptr=&a;
printf("Enter the value of a\n");
scanf("%d",&a);
if(*ptr==0){
    printf("It is zero\n");
}
else if(*ptr>0){
    printf("It is a positive number\n");
}
else{
    printf("It is a negative number");
}
return 0;

}
