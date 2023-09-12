// account.cpp

#include "account.h"
#include <iostream>

// Default constructor.
Account::Account() : balance(0.0) {}

// Parameterized constructor.
Account::Account(double initialBalance) : balance(initialBalance) {}

// Getter function to return the current balance.
double Account::getBalance() {
    return balance;
}

// Setter function to set the balance to a new value.
void Account::setBalance(double newBalance) {
    balance = newBalance;
}

// Function to deposit an amount into the account.
void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

// Function to withdraw an amount from the account.
void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

// Destructor.
// Display a message indicating the account is being destroyed.
Account::~Account() {
    std::cout << "Account with balance " << balance << " is being destroyed." << std::endl;
}
