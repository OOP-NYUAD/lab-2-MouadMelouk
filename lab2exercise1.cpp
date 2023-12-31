#include <iostream>
#include "account.h"

int main() {
    // Create Account objects
    Account account1; // Default constructor with initial balance 0
    Account account2(1000); // Parameterized constructor with initial balance 1000

    // Print initial balances
    std::cout << "Account 1 balance: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance: " << account2.getBalance() << std::endl;

    // Deposit into Account 1 and withdraw from Account 2
    account1.deposit(500);
    account2.withdraw(200);

    // Print balances after transactions
    std::cout << "Account 1 balance after deposit: " << account1.getBalance() << std::endl;
    std::cout << "Account 2 balance after withdrawal: " << account2.getBalance() << std::endl;

    // Set a new balance for Account 1
    account1.setBalance(3000);

    std::cout << "Account 1 balance after setting a new balance: " << account1.getBalance() << std::endl;

    // Try to withdraw more than the balance from Account 2
    if (account2.getBalance() > 1000) {
        account2.withdraw(1000);
        std::cout << "Account 2 balance after withdrawal: " << account2.getBalance() << std::endl;
    } else {
        std::cout << "Insufficient funds!" << std::endl;
    }

    return 0;
}
