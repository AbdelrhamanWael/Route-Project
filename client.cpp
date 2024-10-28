#include "Client.h"
#include <iostream>

Client::Client(int id, const string& name, const string& password)
	: Person (id , name , password) {}

void Client::displayClientDetails() const {

	cout << "Client ID :" << getId() << endl;
	cout << "Client Name:" << getName() << endl;
}

// client classs is inherited from person (parent class)
