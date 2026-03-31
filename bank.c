#include<stdio.h>
#include<string.h>

void bank_details(Details *acc);
void withdraw_money();
void add_money();

typedef struct{
    char name[30];
    int acc_no;
    int cibil_score;
    char married_status[20];
    char address[50];
    float balance;
} Details;

int main(){
    Details customer;
    customer.balance=2000.0;
    printf("\nEnter your name=\nEnter your account number=\nEnter your cibil score=\nEnter Marital status(married or unmarried)=\nEnter your address=");
    scanf("%s %d %d %s %s",
        customer.name,
        &customer.acc_no,
        &customer.cibil_score,
        customer.married_status,
        customer.address);

        int choice;
        do{
        printf("\n\n!--Bank Management System--!");
        printf("\n1. Bank Details");
        printf("\n2. Money Withdrawal");
        printf("\n3. Add Money into bank");
        printf("\n4. Exit");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        goto bank_details;
        else if(choice==2)
        goto withdraw_money;
        else if(choice==3)
        goto add_money;
        else if(choice==4)
        goto exit_bank;
        else 
        goto invalid_choice;

        bank_details:
        bank_details(customer);
        goto end;

        withdraw_money:
        withdraw_money();
        goto end;

        add_money:
        add_money();
        goto end;

        exit_bank:
        printf("\nClosing the Bank");
        goto end;

        invalid_choice:
        printf("\nInvalid choice entered");
        goto end;
        end:
        }while(choice!=4);
    return 0;
}

void bank_details(Details *acc)
{
    int check_acc;
    printf("\nEnter your account number to check bank details=");
    scanf("%d",&check_acc);
    if(check_acc==acc->acc_no)
    {
        printf("\nBANK ACCOUNT DETAILS:-");
        printf("\nName is : %s",acc->name);
        printf("\nAccount number is : %d",acc->acc_no);
        printf("\nCibil Score : %d",acc->cibil_score);
        printf("\nMarried Status : %s",acc->married_status);
        printf("\nAddress : %s",acc->address);
        printf("\nBank balance : %d",acc->balance);
    }
    else
    {
        printf("\nIncorrect account number entered!");
    }

}

void withdraw_money()
{
    printf("\nWithdraw Money: ");
}

void add_money()
{
    printf("\nDeposit Money: ");
}
