#include <iostream>
#include "account.h"


    void Account::withdraw(double amount){
        if(balance - amount < 0){
            std::cout << "Insufficient funds!" << std::endl;
        }else {
         balance-=amount;
        }

    }


    Account::Account(){
        balance = 0;
    };

    // Parameterized constructor.
    // Initialize 'balance' with the provided 'initialBalance'.
    Account::Account(double initialBalance) {
        balance = initialBalance;
    };

    // Getter function to return the current balance.
    double Account::getBalance(){
        return balance;
    };

    // Setter function to set the balance to a new value.
    void Account::setBalance(double newBalance){
        balance = newBalance;
    };

    // Function to deposit an amount into the account.
    void Account::deposit(double amount){
        balance+=amount;
    }

    Account::~Account(){
        std::cout << "Account with balance " << balance << " is being destroyed." <<std::endl;
    };