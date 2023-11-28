#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    // Method to set data for the account
    void setData() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Method to deposit money
    void deposit(float amount) {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    // Method to withdraw money
    void withdraw(float amount) {
        //if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
        //else {
            //cout << "Insufficient balance. Withdrawal failed." << endl;
        //}


    // Method to display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.setData();

    float depositAmount, withdrawAmount;

    cout << "\nEnter the amount to deposit: ";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);

    cout << "\nEnter the amount to withdraw: ";
    cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);

    cout << "\nAccount Details:\n";
    myAccount.display();

    return 0;
}
