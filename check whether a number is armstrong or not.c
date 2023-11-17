#include<stdio.h>
#include<math.h>

int main(){
int length,n,digit,result,sum=0;
printf("Enter any number: ");
scanf("%d",&n);
int m=n;
length=(int)log10(n)+1;
for(int i=1;i<=length;i++){
    digit=n%10;
    result=pow(digit,length);
    n=n/10;
    sum=sum+result;
}
if(sum==m){
    printf("It is an armstrong number.");
}
else{
    printf("It is not an armstrong number.");
}


return 0;
}
