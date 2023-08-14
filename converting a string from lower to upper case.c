#include<stdio.h>

int main(){
char str[100], i=0, j=0, up[100];
printf("Enter the string\n");
gets(str);
while(str[i]!='\0'){
    if(str[i]>='a' && str[i]<='z')
        up[j]=str[i]-32;
        else
            up[j]=str[i];
          i++;  j++;
}
up[j]='\0';
printf("The string in upper case is\n");
puts(up);



return 0;
}
