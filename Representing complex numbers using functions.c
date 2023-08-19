#include<stdio.h>

void display();

int main(){

display();
return 0;
}
void display(){
    int i=0,r, c;
    printf("Enter the real and imaginary part values\n");
    for(i=1; i<6; i++){
        scanf("%d %d",&r,&c);
        printf("%d + %dy\n",r,c);
    }
}





