#include<stdio.h>

int main(){
int i=1, n;
float sum=0.0;
   printf("Enter any value of n: ");
   scanf("%d",&n);
 if(n<=0){
    printf("Enter valid number");
 }
   while(i<=n){

   printf("1/%d+",i);
   sum+=(1.0/i);
   i++;
  }
   printf("\n%f",sum);

return 0;
}
