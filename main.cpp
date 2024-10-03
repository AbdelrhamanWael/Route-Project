#include <iostream>
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <string>
using namespace std;

int main()
{
    //========================== For Client Class====================================
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
    cout << "===========================================" << endl;

    // c.Displayclientinfo();

    //============================== For Employee Class=================================
    Employee e;

    double salary;

    cout << "Enter Employee Name: ";
    cin >> name;
    e.setName(name);

    cout << "Enter Employee ID: ";
    cin >> id;
    e.setId(id);

    // for searching
    int clientid;
    cout << "Enter Client ID: ";
    cin >> clientid;
    bool found = e.searchClient(clientid);

    if (found)
    {
        cout << "Client Already Exist" << endl;
    }
    else
    {
        cout << "Client Not Exist" << endl;
    }

    cout << "Enter Employee Password: ";
    cin >> password;
    e.setPassword(password);

    cout << "Enter Employee Salary: ";
    cin >> salary;
    e.setSalary(salary);
    cout << "===========================================" << endl;

    // e.DisplayEmployeeinfo();

    ofstream outputFile1("employee_data.txt");

    if (outputFile1.is_open())
    {
        // Write employee data to the file
        outputFile1 << "Employee Name: " << name << endl;
        outputFile1 << "Employee ID: " << id << endl;
        outputFile1 << "Employee Password: " << password << endl;
        outputFile1 << "Employee Salary: " << salary << endl;

        outputFile1.close();
        cout << "data saved Successfully" << endl;
    }
    else
    {
        cout << "Unable to open file";
    }

    //===============================Admin Class====================================

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
    a.setSalary(balance);

    c.setBalance(balance);

    c.Displayclientinfo();

    cout << endl;
    e.DisplayEmployeeinfo();
    cout << endl;
    a.DisplayAdmininfo();

    return 0;
}