#pragma once
#ifndef PERSER_H
#define PERSER_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;


class Parser
{
public:

	static vector<string>split(string line) {

		string part;
		stringstream ss (line);
		vector<string>info;

		while (getline(ss, part, '&')) {
			info.push_back(part);
		}
		return info;
	}

	static Client ParseToClinet(string line) {
		vector <string>info=split(line);
		Client c;
		c.setId(stoi(info[0]));
		c.setName(info[1]);
		c.setPassword(info[2]);
		c.setBalance(stod(info[3]));

		return c;
	}

	static Employee ParseToEmployee(string line) {
		vector<string>info=split(line);
		Employee e;
		e.setId(stoi(info[0]));
		e.setName(info[1]);
		e.setPassword(info[2]);
		e.setSalary(stod(info[3]));

		return e;
	}

	static Admin ParseToAdmin(string line) {
		vector<string>info=split(line);
		Admin a;
		a.setId(stoi(info[0]));
		a.setName(info[1]);
		a.setPassword(info[2]);
		a.setSalary(stod(info[3]));

		return a;
	}


};
#endif
