#include<stdio.h>

void bank_details();
void withdraw_money();
void add_money();
void exit();
void invalid_choice();

int main(){
    while(1){
        int choice;
        printf("\n\n!--Bank Management System--!");
        printf("\n1. Bank Details");
        printf("\n2. Money Withdrawal");
        printf("\n3. Add Money into bank");
        printf("\n4. Exit");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        goto bank_details();
        goto end;
        else if(choice==2)
        goto withdraw_money();
        goto end;
        else if(choice==3)
        goto add_money();
        goto end;
        else if(choice==4)
        goto exit();
        goto end;
        else
        goto invalid_choice();
        goto end;
        end:
        return 0;
    }
}

void bank_details()
{
    printf("\nBank Details: ");
}

void withdraw_money()
{
    printf("\nWithdraw Money: ");
}

void add_money()
{
    printf("\nDeposit Money: ");
}

void exit()
{
    printf("\nClosing the bank..");
}

void invalid_choice()
{
    printf("\nInvalid choice entered!");
}