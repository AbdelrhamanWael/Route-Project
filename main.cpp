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
}