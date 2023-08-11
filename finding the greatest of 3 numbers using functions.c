#include<stdio.h>

int larger(int, int, int);


int main(){
   int a, b, c;
   printf("enter the value of a\n ");
   scanf("%d",&a);
   printf("Enter the value of b \n");
   scanf("%d",&b);
   printf("Enter the value of c \n");
   scanf("%d",&c);
   printf("The largest of %d,%d,%d is %d",a,b,c,larger(a, b, c));
return 0;
}
int larger(int a, int b, int c){
if (a>b && a>c)
    return a;
else if(b>a && b>c)
    return b;
else
    return c;
}
