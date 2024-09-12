
#include <iostream>
#include "Bank System.h"
using namespace std;
int main()
{
    Employee e;
    e.setId(1);
    e.setName("John Doe");
    e.setPassword("password123");
    e.setSalary(6000);

    cout << "Employee Information:" << endl;
    cout << "Name: " << e.getName() << endl;
    cout << "ID: " << e.getId() << endl;
    cout << "Password: " << e.getPassword() << endl;
    cout << "Salary: " << e.getSalary() << endl;

    return 0;
}
