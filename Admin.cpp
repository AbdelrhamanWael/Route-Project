#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"
#include"Admin.h"
#include "Client.h"
#include "Data.h"
using namespace std;
int main(){


string name;
    string password;
    double balance;
    double salary;
    int id;
    int choice;
    string clientName;
    int clientId;
    double clientBalance;
    string Clientpassword;
    int idtosearch;
    bool employeeAdded = false;
    bool clientAdded = false;
    
    

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
    a.setbalance(balance);

    


    cout << "===========================================" << endl;


cout << " Do you want to add a client? (1. Yes, 2. No)";
cin >> choice;
if (choice == 1)
{
    cout << "Enter Client Name: ";
    cin >> clientName;

    cout << "Enter Client ID: ";
    cin >> clientId;

    cout << "Enter Client Balance: ";
    cin >> clientBalance;
    cout << "Enter Client Password";
    cin >> Clientpassword;
    Client* client = new Client(clientName, clientId, clientBalance, Clientpassword);
    a.addClient(client);
    clientAdded = true;
}
else
{
    cout << "No Client Added" << endl;
}

if (clientAdded)
{
    cout << "======================================" << endl;

    cout << "do you want to search for client ?  (1. Yes, 2. No)";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter client id to search for: ";
        cin >> idtosearch;
        a.searchClient(idtosearch);
    }
    else
    {
        cout << "Client Search Cancelled" << endl;
    }
}
else
{
    cout << "Exiting Program..." << endl;
    return 0; // or exit(0);
}
    
        
    

    cout << "=====================================" << endl;
    //add employee

    


cout << "do you want to add employee ?  (1. Yes, 2. No)";
cin >> choice;
if (choice == 1)
{
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee id: ";
    cin >> id;
    cout << "Enter employee password: ";
    cin >> password;
    cout << "Enter employee salary: ";
    cin >> salary;
    Employee* employee = new Employee(name, password, id, salary, balance);
    a.addEmployee(employee);
    employeeAdded = true;
}
else
{
    cout << "Employee Not Added" << endl;
}

if (employeeAdded)
{
    cout << "======================================" << endl;

    cout << "do you want to search for employee ?  (1. Yes, 2. No)";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter employee id to search for: ";
        cin >> idtosearch;
        a.searchEmployee(idtosearch);
    }
    else
    {
        cout << "Employee Search Cancelled" << endl;
    }
}
else
{
    cout << "Exiting Program..." << endl;
    return 0; 
}
ofstream outputFile1("Admin_data.txt");

if (outputFile1.is_open())
{
    // Write admin data to the file
    outputFile1 << "Admin Name: " << name << endl;
    outputFile1 << "Admin ID: " << id << endl;
    outputFile1 << "Admin Salary: " << salary << endl;
    outputFile1 << "======================================" << endl;
    // Write client data to the file
    outputFile1 << "Client that You added ::" << endl;
    outputFile1 << "Client Name: " << clientName << endl;
    outputFile1 << "Client ID: " << clientId << endl;
    outputFile1 << "Client Balance: " << clientBalance << endl;
    outputFile1 << "Client Password: " << Clientpassword << endl;
    outputFile1 << "======================================" << endl;
    // Write employee data to the file
    outputFile1 << "Employee that You added ::" << endl;
    outputFile1 << "Employee Name: " << name << endl;
    outputFile1 << "Employee ID: " << id << endl;
    outputFile1 << "Employee Salary: " << salary << endl;
    outputFile1 << "======================================" << endl;
    outputFile1.close();
    cout << "data saved Successfully" << endl;
}
else
{
    cout << "Unable to open file";
}












    










}