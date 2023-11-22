#include<stdio.h>

int main(){
char symbol;
int n1,n2;
do{
    printf("Enter the 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("Enter the operator: ");
    fflush(stdin);
    scanf("%c",&symbol);
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='%'){
    switch(symbol){
  case '+':
    printf("Sum is %d\n",n1+n2);
    break;
  case '-':
    printf("Difference is %d\n",n1-n2);
    break;
  case '*':
    printf("Product is %d\n",n1*n2);
    break;
  case '/':
    printf("Quotient is %d\n",n1/n2);
    break;
  case '%':
    printf("Remainder is %d\n",n1%n2);
    break;
  default:
    printf("Please choose right operator.\n");
    break;
    }
 }
    else{
    printf("Please chose right operator.\n");
       break;
    }

}
while(1);


return 0;
}
