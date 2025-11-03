#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct account {
int acc_no;
char name[50];
float balance;
} acc;

void createAccount();
void deposit();
void withdraw();
void display();

int main() {
  int choice;
  clrscr();

  while (1) {
  printf("\n---Mini Banking Statement ---\n");
  printf("1.Create Account\n2.Deposit\n3.Withdraw\n4.Display\n5.Exit\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch (choice) {
  case 1: createAccount();break;
  case 2: deposit();break;
  case 3: withdraw();break;
  case 4: display();break;
  case 5: exit(0);
  default: printf("Invalid choice!\n");
  }
  }
  getch();
  return 0;
  }

  void createAccount() {
  printf("enter account number: ");
  scanf("%d",&acc.acc_no);
  printf("enter name: ");
  fflush(stdin);
  gets(acc.name);
  printf("Enter initial balance: ");
  scanf("%f",&acc.balance);
  printf("Account created successfully!\n");
  }

  void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f",&amount);
    acc.balance+=amount;
    printf("Amount deposited successfully!\n");
    }

  void withdraw(){
    float amount;
    printf("enter amount to withdraw: ");
    scanf("%f",&amount);
    if (amount>acc.balance)
    printf("Insufficient Balance!\n");
    else{
    acc.balance-=amount;
    printf("Amount withdrawn successfully!\n");
    }
    }

    void display(){
    printf("\n---Account details---\n");
    printf("Account no: %d\n",acc.acc_no);
    printf("Name: &s\n",acc.name);
    printf("Balance: %.2f\n",acc.balance);
    }
