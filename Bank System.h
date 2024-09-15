#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    // attributes:
    string name;
    string password;
    int id;

public:
    Person()
    {
        this->id = 0;
    }
    Person(string name, string password, int id)
    {
        this->name = name;
        this->password = password;
        this->id = id;
    }
};
class Client : public Person
{
protected:
    // attribute:
    double balance;

public:
    // constractor:
    Client()
    {
        this->balance = 0;
    };
    Client(string name, string password, int id, double balance)
        : Person(name, password, id)
    {

        if (balance < 1500)
        {
            cout << "the minimum of balance is 1500 !";
        
            return;
        }
        else
        {
            this->balance = balance;
        }
    }

    // setter:
    void setName(string name)
    {

        int count = 0;

        if (name.length() < 5 || name.length() > 20)
        {
            cout << "the name must be between 5 to 20 latter !" << endl;
            return;
        }

        else
        {
            for (int i = 0; i < name.size(); i++)
            {
                if (isalpha(name[i]))
                {
                    count++;
                }
            }
            if (count != name.length())
            {
                cout << " not done";
            }
            else
            {
                cout << "done";
            }

            this->name = name;
        }
    }
    void setPassword(string password)
    {
        while (true)
        {
            if (password.length() < 8 || password.length() > 20)
            {
                cout << "password min size 8. Please enter a valid password: ";
                cin >> password;
            }
            else
            {
                this->password = password;
                break;
            }
        }
    }
    void setBalance(double balance)
    {
        while (true)
        {
            if (balance < 1500)
            {
                cout << "balance must be greater than 1500. Please enter a valid balance: ";
                cin >> balance;
            }
            else
            {
                this->balance = balance;
                break;
            }
        }
    }
    void setId(int id)
    {
        this->id = id;
    }

    // getter:
    string getName()
    {
        return this->name;
    }
    string getPassword()
    {
        return this->password;
    }
    double getBalance()
    {
        return this->balance;
    }
    int getId()
    {
        return this->id;
    }

    // Display function
    void deposit(double amount)
    {
        balance += amount;
        cout << " The deposit amount   : " << amount << endl;
        cout << " The current balance  : " << balance << endl;

        cout << "----------------------------\n";
    }

    void withdraw(double amount)
    {
        if (balance < amount)
        {
            cout << " Your balance is less than the amount you want to withdraw !" << endl;
            return;
        }

        balance -= amount;
        cout << " The withdrawn amount : " << amount << endl;
        cout << " The current balance  : " << balance << endl;

        cout << "----------------------------\n";
    }
    void transferTo(double amount, Client &recipient)
    {
        if (balance < amount)
        {
            cout << " Your balance is less than the amount you want to withdraw !" << endl;
            return;
        }

        balance -= amount;
        recipient.balance += amount;
        cout << " The amount transfered To : " << amount << endl;
        cout << " The current balance      : " << balance << endl;

        cout << "----------------------------\n";
    }
    void checkBalance()
    {
        cout << " The current balance : " << balance << endl;
        cout << "----------------------------\n";
    }
    void Displayclientinfo()
    {
        cout << "       welcome :-   " << endl;
        cout << " Name     : " << name << endl;
        cout << " password : ************" << endl;
        cout << " id       : " << id << endl;
        cout << " Balance  : " << balance << endl;
        cout << "----------------------------\n";
    }
};

class Employee : public Person
{
private:
    double salary;

public:
    Employee() {}
    Employee(string name, string password, int id, double salary) : Person(name, password, id), salary(salary) {}

    // getters
    double getSalary()
    {
        return salary;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }

    // setters
    void setSalary(double salary)
    {
        while (true)
        {
            cout << "Please enter a valid balance: ";
            cin >> salary;
            if (salary >= 5000)
            {
                this->salary = salary;
                break;
            }
            else
            {
                cout << "salary must be greater than or equal to 5000." << endl;
            }
        }
    }

    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        while (true)
        {
            if (name.length() < 5 || name.length() > 20)
            {
                cout << "name min size 5. Please enter a valid name: ";
                cin >> name;
            }
            else
            {
                this->name = name;
                break;
            }
        }

        
    }
    void setPassword(string password)
    {

        while (true)
        {
            cout << "Please enter a valid password: ";
            cin >> password;
            if (password.length() >= 8 && password.length() <= 20)
            {
                this->password = password;
                break;
            }
            else
            {
                cout << "Password must be between 8 and 20 characters." << endl;
            }
        }
    }

    // display
    void DisplayEmployeeinfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Password: " << password << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------------------------" << endl;
    }
};
class Admin : public Person {
    private:
        string name;
        string password;
        int id;
        double balance;

    public:
        Admin() {};
        Admin(string name, string password, int id, double balance) : Person(name, password, id), balance(balance) {}
        

        

        // getters
        double getBalance()
        {
            return balance;
        }
        int getId()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        string getPassword()
        {
            return password;
        }

        // setters
        void setBalance(double balance)
        {
            while (true)
            {
                cout << "Please enter a valid balance: ";
                cin >> balance;
                if (balance >= 5000)
                {
                    this->balance = balance;
                    break;
                }
                else
                {
                    cout << "Balance must be greater than or equal to 5000." << endl;
                }
            }
        }
        void setId(int id)
        {
            this->id = id;
        }
        void setName(string name)
        {
            while (true)
            {
                if (name.length() < 5 || name.length() > 20)
                {
                    cout << "name min size 5. Please enter a valid name: ";
                    cin >> name;
                }
                else
                {
                    this->name = name;
                    break;
                }
            }
        }
        void setPassword(string password)
        {
            while (true)
            {
                cout << "Please enter a valid password: ";
                cin >> password;
                if (password.length() >= 8 && password.length() <= 20)
                {
                    this->password = password;
                    break;
                }
                else
                {
                    cout << "Password must be between 8 and 20 characters." << endl;
                }
            }
        }

        // display
        void DisplayAdmininfo()
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Balance: " << balance << endl;
        }

};

#endif