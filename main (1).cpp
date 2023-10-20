#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    BankAccount(int accNumber, const std::string& accHolderName) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount must be greater than 0." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount(12345, "John Doe");

    // Test deposit and withdrawal functionality
    myAccount.displayBalance(); // Initial balance should be $0.0

    myAccount.deposit(1000.0);
    myAccount.displayBalance(); // Balance after deposit should be $1000.0

    myAccount.withdraw(500.0);
    myAccount.displayBalance(); // Balance after withdrawal should be $500.0

    myAccount.withdraw(700.0); // Should display an error message due to insufficient balance

    return 0;
}
