
#include <iostream>
#include "Bank System.h"
using namespace std;
int main()
{
    //====================================================== For Client Class======================================================
    Client c;
    string name;
    string password;
    int balance;
    int id;

    cout << "Enter Client Name: ";
    cin >> name;
    c.setName(name);
    if (name.length() < 5 || name.length() > 20 )
    {
        cout << "Invalid name. Please try again." << endl;
        return 1;
    }
    cout << "Enter Client ID: ";
    cin >> id;
    c.setId(id);

    cout << "Enter Client Password: ";
    cin >> password;
    c.setPassword(password);

    // Check if password is correct
    if (password.length() < 8 || password.length() > 20)
    {
        cout << "Invalid password. Please try again." << endl;
        return 1;
    }
    cout << "Enter Client Balance: ";
    cin >> balance;
    c.setBalance(balance);

    // Check if balance is correct
    if (balance < 1500)
    {
        cout << "Invalid balance. Please try again." << endl;
        return 1;
    }

    c.Displayclientinfo();


    //====================================================== For Employee Class======================================================
    Employee e;
    
    double salary;

    cout << "Enter Employee Name: ";
    cin >> name;
    e.setName(name);
    if (name.length() < 5 || name.length() > 20)
    {
        cout << "Invalid name. Please try again." << endl;
        return 1;
    }
    cout << "Enter Employee ID: ";
    cin >> id;
    e.setId(id);

    cout << "Enter Employee Password: ";
    cin >> password;
    e.setPassword(password);

    // Check if password is correct
    if (password.length() < 8 || password.length() > 20)
    {
        cout << "Invalid password. Please try again." << endl;
        return 1;
    }
    cout << "Enter Employee Salary: ";
    cin >> salary;
    e.setSalary(salary);

    // Check if salary is correct
    if (salary < 5000)
    {
        cout << "Invalid salary. Please try again." << endl;
        return 1;
    }

    e.DisplayEmployeeinfo();
    //==================================================================Admin Class===========================================================

    Admin a;

    

    cout << "Enter Admin Name: ";
    cin >> name;
    a.setName(name);
    if (name.length() < 5 || name.length() > 20)
    {
        cout << "Invalid name. Please try again." << endl;
        return 1;
    }
    cout << "Enter Admin ID: ";
    cin >> id;
    a.setId(id);

    cout << "Enter Admin Password: ";
    cin >> password;
    a.setPassword(password);

    // Check if password is correct
    if (password.length() < 8 || password.length() > 20)
    {
        cout << "Invalid password. Please try again." << endl;
        return 1;
    }
    cout << "Enter Admin Balance: ";
    cin >> balance;
    a.setBalance(balance);

    // Check if balance is correct
    if (balance < 5000)
    {
        cout << "Invalid balance. Please try again." << endl;
        return 1;
    }

    a.DisplayAdmininfo();


    
    



    return 0;
}
