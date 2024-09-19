#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Client.h"
#include"Validation.h"
#include <string>

 using namespace std;

 class Employee : public Person
 {
 private:
     double salary;

 public:
     Employee() { this->salary = 0; }
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

         this->name = name;;

     }
     void setPassword(string password)
     {
         Validation::valiPassword(password);

         this->password = password;

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
