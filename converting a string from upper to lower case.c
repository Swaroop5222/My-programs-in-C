#include<stdio.h>

int main(){
char str[100], i=0, lower[100], j=0;
printf("Enter the string\n");
gets(str);
for(i=0; str[i]!='\0'; i++){
    if(str[i]>='A'&&str[i]<='Z')
        lower[j]=str[i]+32;
    else
        lower[j]=str[i];
        j++;
}
lower[j]='\0';
printf("The string in lower case is\n");
puts(lower);


return 0;
}

