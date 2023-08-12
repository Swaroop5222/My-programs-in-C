#include<stdio.h>
int main(){
int m, n, sum;
float avg;
int *ptr1=&m, *ptr2=&n;
printf("Enter the value of m\n");
scanf("%d",&m);
printf("Enter the value of n\n");
scanf("%d",&n);
for(m=0; m<=n; m++){
    sum=sum+*ptr1;
    avg=sum/2.0;

}
printf("sum is %d\n",sum);
printf("average is %f\n",avg);
return 0;
}
