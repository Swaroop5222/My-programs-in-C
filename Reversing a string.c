#include<stdio.h>
#include<string.h>

int main(){
char str[100], temp;
int i, j=0;
printf("Enter the string:\n");
gets(str);
j=strlen(str)-1;
for(i=0; i<j; i++){
    temp=str[j];
    str[j]=str[i];
    str[i]=temp;
    j--;
}
printf("The string after reversed is:\n");
puts(str);

return 0;
}
