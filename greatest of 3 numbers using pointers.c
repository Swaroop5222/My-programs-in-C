#include<stdio.h>
int main(){
int a, b, c;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
printf("Enter the value of c\n");
scanf("%d",&c);
int *ptr1=&a,*ptr2=&b,*ptr3=&c;
if(*ptr1>*ptr2 && *ptr1>*ptr3){
    printf("%d is the largest number\n",*ptr1);
}
else if(*ptr2>*ptr1 && *ptr2>*ptr3){
    printf("%d is the largest number\n",*ptr2);
}
else{
  printf("%d is the largest number\n",*ptr3);
}


return 0;
}
