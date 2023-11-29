#include <stdio.h>
#include <string.h>

struct Account{
    char name[30];
    char last_name[40];
    int id;
    int balance;
};

// this is the preferred way using a pointer and the arrow notation
void print_account_data(struct Account* account){
    printf("Customer %s %s have %d dollars in account.\n",
            account -> name, account -> last_name, account -> balance);
}
/* In this case we use a pointer with the dot notation (not preferred)
void print_account_data(struct Account* account){
    printf("Customer %s %s have %d dollars in account.\n",
            (*account).name, (*account).last_name, (*account).balance);
}*/

/* In this case we pass a copy of the struct which is not optimized for memory usage
void print_account_data(struct Account account){
    printf("Customer %s %s have %d dollars in account.\n",
            account.name, account.last_name, account.balance);
}*/

int main(){
    struct Account acc1;
    // a string is a char array that ends with a digit 0 that represents NULL
    strcpy(acc1.name, "Pepito");
    strcpy(acc1.last_name, "Perez");
    acc1.id = 1234;
    acc1.balance = 400;

    print_account_data(&acc1);

    return 0;
}
