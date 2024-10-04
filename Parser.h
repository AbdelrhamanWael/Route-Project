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

	vector<string>parts;

class Parser
{
public:

	static vector<string>split(string line) {

		string part;
		stringstream ss (line);

		while (getline(ss, part, '&')) {
			parts.push_back(part);
		}

	}

	static Client ParseToClinet(string line) {
		Client c;

		split(line);

		c.setId(stoi(parts[0]));
		c.setName(parts[1]);
		c.setPassword(parts[2]);
		c.setBalance(stod(parts[3]));

		return c;
	}

	static Employee ParseToEmployee(string line) {
		Employee e;

		split(line);

		e.setId(stoi(parts[0]));
		e.setName(parts[1]);
		e.setPassword(parts[2]);
		e.setSalary(stod(parts[3]));

		return e;
	}

	static Admin ParseToAdmin(string line) {
		Admin a;

		split(line);

		a.setId(stoi(parts[0]));
		a.setName(parts[1]);
		a.setPassword(parts[2]);
		a.setSalary(stod(parts[3]));

		return a;
	}



};
#endif
