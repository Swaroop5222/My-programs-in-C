#include<stdio.h>

int value(char);

int main(){
int a;
printf("Enter the character of a\n");
scanf("%c",&a);
value(a);

return 0;
}
int value(char a){
if(a>='A' && a<='Z'){
    printf("the asc2 value of %c is %d",a,a);
}
if(a>='a' && a<='z'){
    printf("the asc3 value of %c is %d",a,a);
}
}
