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
public:
	Admin() : Employee() {

	}
	Admin(int id, string name, string password, double salary) : Employee(id, name, password, salary) {

	}
	void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getID() == id) return eIt._Ptr;
		}
		return NULL;
	}
	void editEmployee(int id, string name, string password, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setSalary(salary);
	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			eIt->display();
			cout << "--------------------\n";
		}
	}
};

static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;
