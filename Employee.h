#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Person.h"

#include "Client.h"
#include "Validation.h"
#include <string>
#include <vector>
#include <iterator>


using namespace std;


class Employee : public Person
{
private:
    double salary;
    static vector<Client*> allClients;
    static vector<Employee> allEmplyees;
    static vector<Employee>::iterator eIt;

public:


    Employee() { this->salary = 0; }
    ~Employee() {}
    Employee(int id, string name, string password, double salary) : Person(id, name, password) {
        setSalary(salary);
    }


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
        
        allClients.push_back(client);
    }
    //search
    Client* searchClient(int id){
        for (Client* client : allClients)
        {
            if (client->getId() == id)
            {
                return client;
            }
        }
        return nullptr;
    }
    //listofclient
    void listofclient(){
        for (Client* client : allClients)
        {
            client->Displayclientinfo();
        }
    }
    //EDITCLIENT
    void editClient(int id, string name, string password, double balance)
    {
        for (int i = 0; i < allClients.size(); i++)
        {
            if (allClients[i]->getId() == id)
            {
                allClients[i]->setName(name);
                allClients[i]->setPassword(password);
                allClients[i]->setBalance(balance);
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
#endif