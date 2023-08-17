#include<stdio.h>

int main(){
int n, loc=0, arr[20];
printf("enter the number of elements in the array\n");
scanf("%d",&n);
for(int i=0; i<n; i++)
{
    printf("Enter the element %d\n ",i);
    scanf("%d",&arr[i]);}
int small=arr[0];
for(int i=0; i<n; i++){
    if(small>arr[i]){
        small=arr[i];
        loc=i;
    }
}
    printf("The position of the smallest number is %d\n",loc);
return 0;
}
