#include<stdio.h>

int main(){
char str1[100], str2[100];
int  n, i=0;
printf("Enter the string:\n");
gets(str1);
printf("Enter the number of copies to be copied:\n");
scanf("%d",&n);
while(str1[i]!=0 && i<n){
    str2[i]=str1[i];
    i++;
}
str2[i]='\0';
printf("The string after copying the characters is:\n");
puts(str2);




return 0;
}
