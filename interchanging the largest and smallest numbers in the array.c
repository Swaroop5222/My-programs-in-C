#include<stdio.h>

int main(){
int n, arr[10], small, large, s_loc, l_loc;
printf("Enter the number of elements in the array\n ");
scanf("%d",&n);
printf("Enter the elements\n ");
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
 small=arr[0];
for(int i=0; i<n; i++){
    if(small>arr[i]){
        small=arr[i];
        s_loc=i;
    }
}
 large=arr[0];
for(int i=0; i<n; i++){
    if(large<arr[i]){
        large=arr[i];
        l_loc=i;
    }
}
printf("The smallest number is %d\n",small);
printf("The largest number is %d\n",large);
int temp;
temp=arr[s_loc];
arr[s_loc]=arr[l_loc];
arr[l_loc]=temp;
printf("The array after interchanging largest and smallest numbers is\n");
for(int i=0; i<n; i++ ){
    printf("%d",arr[i]);
}

return 0;
}
