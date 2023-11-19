#include<stdio.h>

int main(){
int n,digit,result,sum=0;
printf("Enter any number: ");
scanf("%d",&n);
int m=n;
int k=printf("%d",n);
for( int i=1;i<=k;i++){
    int fact=1;
    digit=n%10;
    for(int j=digit;j>=1;j--){
        fact=fact*j;
    }
    result=fact;
    n=n/10;
    sum=sum+result;
}
if(sum==m){
    printf("\nIt is a strong number.");
}
else{
    printf("\n It is not a strong number.");
}


return 0;
}
