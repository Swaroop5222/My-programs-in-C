#include<stdio.h>

int main(){
char str1[100], str2[100];
int i=0, j=0;
printf("Enter the string in str2:\n");
gets(str2);
printf("Enter the string in str1:\n");
gets(str1);
while(str1[i]!='\0'){
        i++;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
}
str1[i]='\0';
printf("The string after appending is:\n");
puts(str1);
return 0;
}
