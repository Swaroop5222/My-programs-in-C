#include<stdio.h>

void address(int*);
int main(){
int i=5;
printf("The value of i is %d\n",i);
address(&i);
printf("The value of i after change is %d\n",i);

return 0;
}
void address(int *a){
*a=(*a)*10;

}
