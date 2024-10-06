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
    Person(string name, int id, string password); 


};

on
Person::Person()
{
    this->id = 0;
}


Person::Person(string name, int id, string password) 
{
    this->name = name;
    this->password = password;
    this->id = id;
}

// Destructor implementation
Person::~Person()
{
    
}


#endif 