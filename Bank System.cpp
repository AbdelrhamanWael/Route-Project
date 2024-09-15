
#include <iostream>
#include "Bank System.h"
using namespace std;
int main()
{
    //=================================== For Client Class===========================================
    Client c;
    string name;
    string password;
    int balance;
    int id;

    cout << "Enter Client Name: ";
    cin >> name;
    c.setName(name);

    cout << "Enter Client ID: ";
    cin >> id;
    c.setId(id);

    cout << "Enter Client Password: ";
    cin >> password;
    c.setPassword(password);

    cout << "Enter Client Balance: ";
    cin >> balance;
    c.setBalance(balance);

    c.Displayclientinfo();

    //======================================== For Employee Class======================================
    Employee e;

    double salary;

    cout << "Enter Employee Name: ";
    cin >> name;
    e.setName(name);

    cout << "Enter Employee ID: ";
    cin >> id;
    e.setId(id);

    cout << "Enter Employee Password: ";
    cin >> password;
    e.setPassword(password);



    cout << "Enter Employee Salary: ";
    cin >> salary;
    e.setSalary(salary);

    e.DisplayEmployeeinfo();

    //========================================Admin Class===========================================

    Admin a;

    cout << "Enter Admin Name: ";
    cin >> name;
    a.setName(name);


    cout << "Enter Admin ID: ";
    cin >> id;
    a.setId(id);


    cout << "Enter Admin Password: ";
    cin >> password;
    a.setPassword(password);

    cout << "Enter Admin Balance: ";
    cin >> balance;
    a.setBalance(balance);

    a.DisplayAdmininfo();







    return 0;
}

