#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Validation.h"
#include <string>

using namespace std;

class Admin : public Employee
{
private:
    double salary;

public:
    Admin() { this->salary = 0; }
    Admin(string name, string password, int id, double balance) : Employee(name, password, id,salary){}
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
        Validation::valiSalary(salary);

        this->salary = salary;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        Validation::valiName(name);

        this->name = name;
    }
    void setPassword(string password)
    {
        Validation::valiPassword(password);

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


static vector<Admin> allAdmin;
vector <Admin>::iterator ait;

#endif