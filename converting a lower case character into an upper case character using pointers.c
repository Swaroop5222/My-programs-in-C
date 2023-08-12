#include<stdio.h>
int main(){
char a;
printf("Enter the character\n");
scanf("%c",&a);
char *ptr=&a;
if(*ptr>='a' && *ptr<='z'){
    printf("The character %c in upper case is %c",a,*ptr-32);
}
else{
    printf("Please enter lower case character\n");
}
return 0;
}
