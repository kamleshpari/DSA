#include <iostream>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};

Account bank[100];
int totalAccounts = 0;

// Create Account
void createAccount() {
    cout << "\nEnter Account Number: ";
    cin >> bank[totalAccounts].accNo;

    cout << "Enter Name: ";
    cin >> bank[totalAccounts].name;

    cout << "Enter Initial Balance: ";
    cin >> bank[totalAccounts].balance;

    totalAccounts++;
    cout << "Account Created Successfully!\n";
}

// Deposit Money
void deposit() {
    int acc;
    float amount;
    cout << "\nEnter Account Number: ";
    cin >> acc;

    for (int i = 0; i < totalAccounts; i++) {
        if (bank[i].accNo == acc) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            bank[i].balance += amount;
            cout << "Deposit Successful!\n";
            return;
        }
    }
    cout << "Account Not Found!\n";
}

// Withdraw Money
void withdraw() {
    int acc;
    float amount;
    cout << "\nEnter Account Number: ";
    cin >> acc;

    for (int i = 0; i < totalAccounts; i++) {
        if (bank[i].accNo == acc) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (amount <= bank[i].balance) {
                bank[i].balance -= amount;
                cout << "Withdrawal Successful!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
            return;
        }
    }
    cout << "Account Not Found!\n";
}

// Check Balance
void checkBalance() {
    int acc;
    cout << "\nEnter Account Number: ";
    cin >> acc;

    for (int i = 0; i < totalAccounts; i++) {
        if (bank[i].accNo == acc) {
            cout << "Name: " << bank[i].name << endl;
            cout << "Balance: " << bank[i].balance << endl;
            return;
        }
    }
    cout << "Account Not Found!\n";
}

// Display All Accounts
void displayAll() {
    cout << "\nAll Account Details:\n";

    for (int i = 0; i < totalAccounts; i++) {
        cout << "\nAccount No: " << bank[i].accNo << endl;
        cout << "Name: " << bank[i].name << endl;
        cout << "Balance: " << bank[i].balance << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Bank Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAll();
                break;
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}