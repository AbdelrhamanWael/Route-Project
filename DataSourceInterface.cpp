#pragma once
#ifndef DATASOURCEINTRFACE_H
#define DATASOURCEINTRFACE_H
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <vector>

class DataSourceInterface
{
protected:

	virtual	void addClient(Client)=0;
	virtual void addEmploy(Employee) = 0;
	virtual void addAdmin(Admin) = 0;
	virtual vector<Client> getAllClient() = 0;
	virtual vector<Employee> getAllEmployee() = 0;
	virtual vector<Admin> getAllAdmin()= 0;
	virtual void removeAllClient() = 0;
	virtual void removeAllEmployee() = 0;
	virtual void removeAllAdmin() = 0;
};

#endif
