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
	int id;
	string name;
	string password;
	
public:
	Employee() : Person() {
		salary = 0;
	}
	Employee(int id, string name, string password, double salary) : Person(id, name, password) {
		setSalary(salary);
	}
	//getter
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
	double getSalary() {
		return salary;
	}
	//setter
	void setId(int id)
	{
		this->id = id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setPassword(string password)
	{
	void setSalary(double salary) {
		if (Validation::validateSalary(salary)) 
			this->salary = salary;
		else cout << "Invalid salary\n";
	}

	
	void display() {
		Person::display();
		cout << "Salary : " << salary << endl;
	}

	void addClient(Client& client) {
		allClients.push_back(client);
	}
	Client* searchClient(int id) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getID() == id) return clIt._Ptr;
		}
		return NULL;
	}
	void listClient() {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			clIt->display();
			cout << "-------------------------\n";
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}
};


static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;
