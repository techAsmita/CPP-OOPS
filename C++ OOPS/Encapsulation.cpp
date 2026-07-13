//1)Encapsulation: is wrapping data members and member 
//functions in a single unit(object).
//helps in data hiding, imp in hiding sensitive data using private access modifiers.

#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
    double balance;
    string password;

public:
    string accountID;
    string username;

    // Constructor
    Account()
    {
        balance = 0;
        password = "";
    }

    // Setter for password
    void setPassword(string pass)
    {
        password = pass;
    }

    // Deposit money
    void deposit(double amount)
    {
        balance += amount;
    }

    // Withdraw money
    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    // Getter for balance
    double getBalance()
    {
        return balance;
    }

    // Verify password
    bool checkPassword(string pass)
    {
        return pass == password;
    }

    // Display account details
    void display()
    {
        cout << "Account ID : " << accountID << endl;
        cout << "Username   : " << username << endl;
        cout << "Balance    : " << balance << endl;
    }
};

int main()
{
    Account a1;

    a1.accountID = "ACC101";
    a1.username = "Amy";

    a1.setPassword("abc123");

    a1.deposit(5000);
    a1.withdraw(1500);

    cout << "Current Balance = " << a1.getBalance() << endl;

    if(a1.checkPassword("abc123"))
        cout << "Password Correct\n";
    else
        cout << "Wrong Password\n";

    a1.display();

    return 0;
}