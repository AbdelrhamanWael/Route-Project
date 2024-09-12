#include <iostream>
using namespace std;
class Client
{
private:
    string name, password;
    int id;
    double balance;

public:
    Client()
    {
        name = "";
    }
    Client(string name, string password, int id, double balance) : name(name), password(password), id(id), balance(balance) {}
    // getter
    double getBalance()
    {
        return balance;
    }

    string getName()
    {
        return name;
    }

    int getId()
    {
        return id;
    }

    string getPassword()
    {
        return password;
    }
    // setter
    void setBalance(double balance)
    {
        this->balance = balance;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setId(int id)
    {

        this->id = id;
    }

    void setPassword(string password)
    {
        this->password = password;
    }

    // login_function
    bool login(string name, string password)
    {
        if (name == this->name && password == this->password)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // deposit
    void deposit(double amount)
    {
        balance += amount;
    }

    // withdraw
    void withdraw(double amount)
    {
        balance -= amount;
    }

    // transfer
    void transfer(Client &c, double amount)
    {
        balance -= amount;
        c.balance += amount;
    }

    // display
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }

}

int
main()
{
    Client c;
}