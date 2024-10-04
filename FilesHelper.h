#pragma once
#ifndef FILESHELPER_H
#define FILESHELPER_H
#include <iostream>
#include <fstream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "Parser.h"
#include <vector>
using namespace std;


vector<Client> clients;       // store in it  all clients data
vector<Employee> employee;    // store in it all emplyees data
vector<Admin> gadmin;          // store in it all  admins data

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
	/*	string s;

		fstream getcl("client.txt", ios::in);

		while (getline(getcl, s)) {

			Parser::split(s);
			Parser::ParseToClinet(s);

			clients.push_back(s);
		}*/
	}

	static void getEmployees() {

	}
	static void getAdmins() {

	}


	static void clearFile(string flieName, string LastIdFile) {

		fstream clear(flieName, ios::out);
		clear.close();

		fstream clearId(LastIdFile, ios::out);
		clearId << 0;
		clearId.close();
	}
};

#endif
