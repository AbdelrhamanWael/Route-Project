#pragma once
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <string>
using namespace std;


class Person
{
protected:
    // attributes:
    string name;
    string password;
    int id;


public:
    Person();
    virtual ~Person();
    Person(string name, string password, int id);
};

Person::Person()
{
    this->id = 0;
}

Person::Person(string name, string password, int id)
{
    this->name = name;
    this->password = password;
    this->id = id;
}

Person::~Person()
{
    // Add any necessary cleanup code here
}

#endif // PERSON_H