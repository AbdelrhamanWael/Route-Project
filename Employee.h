#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Person.h"
#include "Client.h"
#include "Validation.h"
#include <string>
#include <vector>

using namespace std;

class Employee : public Person
{
private:
    double salary;
    vector<Client*> clients;

public:

    Employee() { this->salary = 0; }
    ~Employee();
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
        ;
    }
    void setPassword(string password)
    {
        Validation::valiPassword(password);

        this->password = password;
    }


    // add Client
    void addClient(Client& client) {
        Client* newClient = new Client(client);
        clients.push_back(newClient);
    }
    //search
    bool searchClient(int id) {
        for (int i = 0; i < clients.size(); i++)
        {
            if (clients[i]->getId() == id)
            {
                return true;
            }
        }
        return false;
    }
    //listofclient
    void listofclient() {
        for (int i = 0; i < clients.size(); i++)
        {
            clients[i]->Displayclientinfo();
        }
    }
    void editClient(int id, string name, string password, double balance) {
        for (int i = 0; i < clients.size(); i++)
        {
            if (clients[i]->getId() == id)
            {
                clients[i]->setName(name);
                clients[i]->setPassword(password);
                clients[i]->setBalance(balance);
            }
        }
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

static vector<Employee> allEmployee;
vector <Employee>::iterator eit;


#endif