#include<stdio.h>

int character(char);

int main(){
int a;
printf("Enter the character of a\n");
scanf("%c",&a);
character(a);

return 0;
}
int character(char a){
if(a>='A' && a<='Z'){
    printf("The character in lower case is %c",a+32);
}
if(a>='a' && a<='z'){
    printf("The character in upper case is %c",a-32);
}

}
