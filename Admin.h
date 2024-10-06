#pragma once
#include "Employee.h"
#include <vector>
#include <iterator>
using namespace std;

class Admin : public Employee
{
private:
    static vector<Employee> allEmployees;
    static vector<Employee>::iterator eIt;

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
            if (eIt->getId() == id) return &(*eIt);
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
            eIt->DisplayEmployeeinfo();
            cout << "--------------------\n";
        }
    }
};

vector<Employee> Admin::allEmployees;
vector<Employee>::iterator Admin::eIt;

static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;