#include<stdio.h>

int main(){
int i,j,mat[5][5];
int r, c;
printf("Enter the number of rows in the matrix: ");
scanf("%d",&r);
printf("Enter the number of columns in the matrix: ");
scanf("%d",&c);
printf("Enter the elements in the matrix: ");
for(i=0; i<r; i++){
    for(j=0; j<c; j++){
        scanf("%d",&mat[i][j]);
    }
}
printf("The elements in the matrix are:\n ");
for(i=0; i<r; i++){
    printf("\n");
    for(j=0; j<c; j++){
        printf("%d",mat[i][j]);
    }
}
printf("\nThe transpose of this matrix is:\n ");
for(i=0; i<r; i++){
    printf("\n");
    for(j=0; j<c; j++){
        printf("%d",mat[j][i]);
    }
}
return 0;
}
