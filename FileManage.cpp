#pragma once
#ifndef FILEMANAGE_H
#define FILEMANAGE_H
#include <iostream>
#include "DataSourceInterface.h"
#include "FilesHelper.h"
using namespace std;

// implement DataSourceinterface ;
// we will call the function from FileHelper only;


class FileManage:DataSourceInterface
{
	virtual	void addClient(Client) {

		//saveClient(Client c)
	}

	virtual void addEmploy(Employee) {

		//saveEmployee(string flieName, string lastIdFile, Employee e)
	}

	virtual void addAdmin(Admin) {

		//saveEmployee(string flieName, string lastIdFile, Employee e)
	}

	virtual vector<Client> getAllClient() {

		//getClients();
	}

	virtual vector<Employee> getAllEmployee() {
		//getEmployees();
	}

	virtual vector<Admin> getAllAdmin() {
		//getAdmins()
	}

	virtual void removeAllClient() {
		//clearFile(string flieName, string LastIdFile)
	}

	virtual void removeAllEmployee() {
		//clearFile(string flieName, string LastIdFile)
	}

	virtual void removeAllAdmin() {
		//clearFile(string flieName, string LastIdFile)
	}
};

#endif
