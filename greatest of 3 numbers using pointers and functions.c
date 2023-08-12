#include<stdio.h>
int great(int*, int*, int*);
int main(){
int x, y, z;
printf("Enter the value of x\n");
scanf("%d",&x);
printf("Enter the value of y\n");
  scanf("%d",&y);
  printf("Enter the value of z\n");
  scanf("%d",&z);
  great(&x,&y,&z);

return 0;
}
int great(int*a, int*b, int*c){
if(*a>*b&&*a>*c)
    printf("%d is the greatest number\n",*a);
else if(*b>*a&&*b>*c)
    printf("%d is the greatest number\n",*b);
else
    printf("%d is the greatest number\n",*c);

}
