#include<stdio.h>
#include<math.h>

int pythagorous(int, int, int);

int main(){
int a, b, c;
printf("enter the value of a\n ");
scanf("%d",&a);
printf("enter the value of b \n");
scanf("%d",&b);
printf("the hypotenuse of right angled triangle is %d",pythagorous(a, b, c));


return 0;
}
int pythagorous(int a, int b, int c){

return c=sqrt((a*a)+(b*b));

}
