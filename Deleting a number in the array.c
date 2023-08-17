#include<stdio.h>

int main(){
int arr[20], n, loc;
printf("Enter the number of elements in the array ");
scanf("%d",&n);
for(int i=0; i<n; i++){
    printf("Enter the element %d\n ",i);
    scanf("%d",&arr[i]);
}
printf("Enter the location you want to delete the number ");
scanf("%d",&loc);
for(int i=loc; i<n-1; i++){
    arr[i]=arr[i+1];
    n--;
}
printf("The array after the deleting the number is\n ");
for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
}


return 0;
}

