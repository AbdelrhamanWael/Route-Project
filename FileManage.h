#pragma once
#ifndef FILEMANAGE_H
#define FILEMANAGE_H
#include <iostream>
#include "DataSourceInterface.h"
#include "FilesHelper.h"
using namespace std;

// implement DataSourceinterface ;
// we will call the function from FileHelper only;


class FileManage: public DataSourceInterface
{
	 void addClient(Client) {

		 //FilesHelper::saveClient(Client c)
	 }

	 void addEmploy(Employee) {

		// FilesHelper::saveEmployee(string flieName, string lastIdFile, Employee e)
	 }

	 void addAdmin(Admin) {

		//saveEmployee(string flieName, string lastIdFile, Employee e)
	 }

	 vector<Client> getAllClients() {

		 FilesHelper::getClients();
	 }

	 vector<Employee> getAllEmployees() {
		 FilesHelper::getEmployees();
	 }

	 vector<Admin> getAllAdmins() {
		 FilesHelper::getAdmins();
	 }

	 void removeAllClient() {
		 FilesHelper::clearFile("client.txt", "clientLastId.txt");
	 }

	 void removeAllEmployee() {
		 FilesHelper::clearFile("admin.txt", "adminLastLd.txt");
	 }

	 void removeAllAdmin() {
		 FilesHelper::clearFile("employee.txt", "employeeLastId.txt");
	 }
};

#endif
