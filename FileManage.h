#pragma once
#ifndef FILEMANAGE_H
#define FILEMANAGE_H
#include <iostream>
#include "DataSourceInterface.h"
#include "FilesHelper.h"
using namespace std;

// implement DataSourceinterface ;
// we will call the function from FileHelper only;

class FileManage : public DataSourceInterface
{
    void addClient(Client client)
    {
        FilesHelper::saveClient(client);
    }

    void addEmploy(Employee employee)
    {
        FilesHelper::saveEmployee("employee.txt", "employeeLastId.txt", employee);
    }

    void addAdmin(Admin admin)
    {
        FilesHelper::saveEmployee("admin.txt", "adminLastId.txt", admin);
    }

    void getAllClients()
    {
        FilesHelper::getClients();
    }

    void getAllEmployees()
    {
        FilesHelper::getEmployees();
    }

    void getAllAdmins()
    {
        FilesHelper::getAdmins();
    }

    void removeAllClient()
    {
        FilesHelper::clearFile("client.txt", "clientLastId.txt");
    }

    void removeAllEmployee()
    {
        FilesHelper::clearFile("admin.txt", "adminLastLd.txt");
    }

    void removeAllAdmin()
    {
        FilesHelper::clearFile("employee.txt", "employeeLastId.txt");
    }
};

#endif
