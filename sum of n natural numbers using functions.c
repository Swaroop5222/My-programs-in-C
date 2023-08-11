#include<stdio.h>
int add(int);
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("sum of %d numbers is %d",n,add(n));

return 0;
}
int add(int n){
int i=1, sum=0;
while(i<=n){
    i++;
    sum=sum+1;
    printf("%d\n",sum);
}return sum;


}
