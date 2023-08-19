#include<stdio.h>

struct bank{
int acc_no;
char name[50];
int amt;
int balance;

};

int main(){
struct bank a, b, c, d;
printf("Enter the person name\n");
gets(a.name);
printf("Enter the account number of %s\n",a.name);
scanf("%d",&b.acc_no);
printf("Enter the amount in the account\n");
scanf("%d",&c.amt);
printf("Enter the balance present in the account\n");
scanf("%d",&d.balance);
printf("The person name is %s\n",a.name);
printf("The account number of %s is %d\n",a.name,b.acc_no);
printf("The amount in the account is %d\n",c.amt);
printf("The balance in the account is %d\n",d.balance);

return 0;
}
