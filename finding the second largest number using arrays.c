#include<stdio.h>

int main(){
int n, arr[10], large, sec, loc;
printf("Enter the number of elements in the array\n ");
scanf("%d",&n);
printf("Enter the elements\n ");
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
large=arr[0];
loc=0;
for(int i=0; i<n; i++){
    if(large<arr[i]){
        large=arr[i];
        loc=i;
    }
}
sec=arr[0];
for(int i=0; i<n; i++){
    if(i!=loc){
        if(arr[i]>sec)
        sec=arr[i];
    }
}
printf("The largest of all numbers is %d\n",large);
printf("The second largest number is %d",sec);
return 0;
}
