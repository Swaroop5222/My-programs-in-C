#include<stdio.h>

struct vectors{

int x;
int y;

};
int main(){
struct vectors v1, v2;
printf("Enter x and y values for v1\n");
scanf("%d %d",&v1.x,&v1.y);
printf("Enter x and y values for v2\n");
scanf("%d %d",&v2.x,&v2.y);
printf("%di + %dj\n",v1.x,v1.y);
printf("%di + %dj",v2.x,v2.y);
return 0;
}
