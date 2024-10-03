#pragma once
#ifndef FILESHELPER_H
#define FILESHELPER_H
#include<string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Parser.h"
#include <vector>
using namespace std;


vector<Client> getclients;       // store in it  all clients data
vector<Employee> getemployee;    // store in it all emplyees data
vector<Admin> getadmin;          // store in it all  admins data

class FilesHelper
{
public :

	static void saveLast(string fileName, int id) {

	}
	static int getlast(string fileName) {

	}
	static void saveClient(Client c) {

	}
	static void saveEmployee(string flieName, string lastIdFile, Employee e) {

	}
	static void getClients(){

	}
	static void getEmployees() {

	}
	static void getAdmins() {

	}
	static void clearFile(string flieName, string LastIdFile) {

	}
};

#endif
