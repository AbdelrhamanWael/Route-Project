#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <cctype>
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
private:
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

        while (balance < 1500) {
            cout << "Minimum balance is 1500! Please enter again: ";
            cin >> balance;
        }

        this->balance = balance;

    }

    // setter:


    void setName(string name)
    {

        while (name.length() < 5 || name.length() > 20) {
            cout << "Name must be between 5 to 20 letters! Please enter again: ";
            cin >> name;
        }
        for (char ch : name) {
            if (!isalpha(ch)) {
                cout << "The name must contain letters only! Please enter again :";
                cin >> name;
            }
        }

        this->name = name;
    }


    void setPassword(string password)
    {
        while (password.length() < 5 || password.length() > 20) {
            cout << "Password must be between 5 to 20 characters! Please enter again: ";
            cin >> password;
        }

        this->password = password;

    }
    void setBalance(double balance)
    {
        while (balance < 1500) {
            cout << "Minimum balance is 1500! Please enter again: ";
            cin >> balance;
        }

        this->balance = balance;

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
    void transferTo(double amount, Client& recipient)
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
        cout << "       welcome :-   " << endl
            << endl;
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
    Employee() { this->salary = 0; }
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
        while (salary < 5000) {
            cout << "Minimum salary is 5000! Please enter again: ";
            cin >> salary;
        }

        this->salary = salary;

    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        while (name.length() < 5 || name.length() > 20) {
            cout << "Name must be between 5 to 20 letters! Please enter again: ";
            cin >> name;
        }
        for (char ch : name) {
            if (!isalpha(ch)) {
                cout << "The name must contain letters only! Please enter again :";
                cin >> name;
            }
        }

        this->name = name;;

    }
    void setPassword(string password)
    {
        while (password.length() < 5 || password.length() > 20) {
            cout << "Password must be between 5 to 20 characters! Please enter again: ";
            cin >> password;
        }

        this->password = password;

    }

    // display
    void DisplayEmployeeinfo()
    {
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "------------------------------------" << endl;
    }
};



class Admin : public Person {
private:

    double salary;

public:
    Admin() { this->salary = 0; }
    Admin(string name, string password, int id, double balance) : Person(name, password, id), salary(salary) {}

    // getters
    double getBalance()
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
        while (salary < 5000) {
            cout << "Minimum salary is 5000! Please enter again: ";
            cin >> salary;
        }

        this->salary = salary;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        while (name.length() < 5 || name.length() > 20) {
            cout << "Name must be between 5 to 20 letters! Please enter again: ";
            cin >> name;
        }
        for (char ch : name) {
            if (!isalpha(ch)) {
                cout << "The name must contain letters only! Please enter again :";
                cin >> name;
            }
        }

        this->name = name;

    }
    void setPassword(string password)
    {
        while (password.length() < 5 || password.length() > 20) {
            cout << "Password must be between 5 to 20 characters! Please enter again: ";
            cin >> password;
        }

        this->password = password;

    }

    // display
    void DisplayAdmininfo()
    {
        cout << " Name    : " << name << endl;
        cout << " ID      : " << id << endl;
        cout << " Salary : " << salary << endl;
        cout << "------------------------------------" << endl;
    }

};



#endif

