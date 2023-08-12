#include<stdio.h>
void address(int*);
int main(){
int i;
printf("The address of i is %u\n",&i);
address(&i);

return 0;
}
void address(int *a){
printf("The address of i in the function is %u",a);

}
