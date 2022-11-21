# include<stdio.h> 

struct bank{
    char account_name[20];
    int account_number;
    float account_balance;
    };

int main(){
    struct bank c1;
    strcpy(c1.account_name,"Sohail");
    c1.account_number=1020;
    c1.account_balance=82548975;
    printf("%d",c1.account_number);

    return 0;
}