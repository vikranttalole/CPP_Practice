#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 0, amount;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully!\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    cout << "Withdrawal successful!\n";
                }
                else
                {
                    cout << "Insufficient balance!\n";
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}

// Q.3. Create a menu-driven program.
// Menu:
// 1.Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit