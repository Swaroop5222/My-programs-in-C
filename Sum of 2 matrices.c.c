#include<stdio.h>

int main(){
int i,j,mat1[5][5], mat2[5][5], sum[5][5];
int r1,c1,r2,c2,r3,c3;
printf("Enter the number of rows in the matrix1:\n ");
scanf("%d",&r1);
printf("Enter the number of columns in the matrix1:\n ");
scanf("%d",&c1);
printf("Enter the number of rows in the matrix2:\n ");
scanf("%d",&r2);
printf("Enter the number of columns in the matrix2:\n ");
scanf("%d",&c2);
if(r1!=r2 || c1!=c2){
    printf("\n The rows and columns in the matrices must be equal");
}
r3=r1;
c3=c1;
printf("\nEnter the elements in the matrix1:\n");
for(i=0; i<r1; i++){
    for(j=0; j<c1; j++){
        scanf("%d",&mat1[i][j]);
    }
}
printf("Enter the elements in the matrix2:\n");
for(i=0; i<r2; i++){
    for(j=0; j<c2; j++){
        scanf("%d",&mat2[i][j]);
    }
}
for(i=0; i<r3; i++){
    for(j=0; j<c3; j++){
        sum[i][j]=mat1[i][j]+mat2[i][j];
    }
}
printf("\nThe sum of matrices 1 and 2 is:\n");
for(i=0; i<r3; i++){
        printf("\n");
    for(j=0; j<c3; j++){
        printf("\t %d",sum[i][j]);
    }
}
return 0;
}
