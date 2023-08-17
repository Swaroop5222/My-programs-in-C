#include<stdio.h>

int main(){
 int n, arr[50], add, loc;
printf("Enter the number of elements in the array\n ");
scanf("%d",&n);
printf("Enter the elements\n ");
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("Enter the number you want to replace\n ");
scanf("%d",&add);
printf("Enter the location in which you want to replace the number\n ");
scanf("%d",&loc);
for(int i=n-1; i>=loc; i--){
    arr[i+1]=arr[i];
    arr[loc]=add;
n++;
}
printf("The new array is\n ");
for(int i=0; i<n; i++){
    printf("%d",arr[i]);

}

return 0;
}
