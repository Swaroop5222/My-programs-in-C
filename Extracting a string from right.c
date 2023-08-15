#include<stdio.h>
#include<string.h>

int main(){
char str1[100], str2[100];
int i=0, j=0, n;
printf("Enter the string:\n");
gets(str1);
printf("Enter the number of copies to be copied:\n");
scanf("%d",&n);
j=strlen(str1)-n;
while(str1[j]!=0){
    str2[i]=str1[j];
    i++;
    j++;
}
str2[i]='\0';
printf("The new string is:\n");
puts(str2);

return 0;
}
