// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Account
{
    int accNo,balance;
    public:
    void accept()
    {
        cout<<"\n accept value for accNo and balance \n";
        cin>>accNo>>balance;
    }
    void display()
    {
        cout<<"account number is "<<accNo<<"\n"<<"balance is "<<balance<<endl;
    }
    void deposit (int amt)
    {
        if (accNo <= 0) {
            cout << "Invalid account number. Cannot deposit.\n";
            return;
        }

        if (amt <= 0) {
            cout << "Deposit amount must be positive. You entered " << amt << "\n";
            return;
        }

        balance += amt;
        cout << "Deposit of " << amt << " successful. New balance is " << balance << "\n";
    }
    void withdraw(int amt)
    {
        if (amt<balance)
        {
           balance=balance-amt;
        
        
        cout<<"remaining balance is "<<balance<<"\n";
    }
    else{
        cout<<"insufficient balance plz refill it and try again \n";
    }
}

};
int main(){
    Account a1;
    a1.accept();
    
    int withdrawalAmount;
    cout <<"Enter amount to withdraw : ";
    cin>> withdrawalAmount;
    if(withdrawalAmount > 0) {
        a1.withdraw(withdrawalAmount);
    }

    int amt;
    cout << "Enter AMOUNT to deposit: ";
    cin >> amt;
    a1.deposit(amt);

    a1.display();
 return 0;
 } 
