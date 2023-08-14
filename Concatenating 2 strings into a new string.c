#include<stdio.h>

int main(){
char str1[100], str2[100], str3[100];
int i=0, j=0;
printf("Enter the string in str1\n");
gets(str1);
printf("Enter sthe string in str2\n");
gets(str2);
while(str1[i]!='\0'){
    str3[j]=str1[i];
    i++;
    j++;
}
while(str2[i]!=0){
    str3[j]=str2[i];
    i++;
    j++;
}
str3[j]='\0';
printf("\nThe characters in str3 is\n");
puts(str3);
return 0;
}
