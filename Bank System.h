
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    string password;
    double salary;

public:
    Employee() {}
    Employee(int id, string name, string password, double salary) : id(id) name(name) password(password) salary(salary) {};
    // getter
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
    // setter
    void setSalary(double salary)
    {
        if (salary < 5000)
        {
            cout << "Salary must be greater than 5000" << endl;
        }
        else
        {
            this->salary = salary;
        }
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        if (name.length() < 5 || name.length() > 20)
        {
            cout << "Name must be between 8 and 20 characters" << endl;
        }
        else
        {
            this->name = name;
        }
    }
    void setPassword(string password)
    {
        if (password.length() < 8 || password.length() > 20)
        {
            cout << "Password must be between 8 and 20 characters" << endl;
        }
        else
        {
            this->password = password;
        }
    }
    // display
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

#endif
