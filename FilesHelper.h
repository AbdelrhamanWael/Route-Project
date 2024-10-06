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

class FilesHelper
{
public :

	static void saveLast(string fileName, int id) {
		fstream myfile(fileName);
		myfile << id;
		myfile.close();
	}

	static int getlast(string fileName) {
		fstream myfile(fileName);
		int id;
		myfile >> id;
		myfile.close();

		return id;
	}
	               
	static void saveClient(Client c) {           //Add New Client to File 
		int id = getlast("clientLastId.txt");
		fstream file("client.txt", ios::app);
		file << id+1 <<'&' << c.getName() << '&' << c.getPassword() << '&' << c.getPassword()<<endl;
		file.close();
		saveLast("clientLastId.txt", id + 1);
	}

	static void saveEmployee(string fileName, string lastIdFile, Employee e) {        //add Admin or emmployee
		int id = getlast(lastIdFile);
		fstream file(fileName, ios::app);
		file <<id+1 <<'&' << e.getName() << '&' << e.getPassword() << '&' << e.getSalary() << endl;
		file.close();
		saveLast(lastIdFile, id + 1);
	}

	static void getClients(){
		string line;  
		fstream file("client.txt");
		while (getline(file, line)) {
			Client c =Parser::ParseToClinet(line);
			allCient.push_back(c);
		}
	}

	static void getEmployees() {
		string line;
		fstream file("employee.txt");
		while (getline(file, line)) {
			Employee e = Parser::ParseToEmployee(line);
			allEmployee.push_back(e);
		}
	}

	static void getAdmins() {
		string line;
		fstream file("admin.txt");
		while (getline(file, line)) {
			Admin a = Parser::ParseToAdmin(line);
			allAdmin.push_back(a);
		}
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