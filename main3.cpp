#include <iostream>
#include <vector>
#include "EmployeeManager.h"
#include "Employee.h"
#include "Client.h"

using namespace std;

int main() {
    vector<Client> clients; 
    EmployeeManager::printClientMenu();

    int choice;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                EmployeeManager::newClient(clients);
                break;
            case 2:
                EmployeeManager::listAllClients(clients);
                break;
            case 3:
                EmployeeManager::searchForClient(clients);
                break;
            case 4:
                EmployeeManager::editClientInfo(clients);
                break;
            case 5: {
                int id;
                string password;
                cout << "Enter client ID: ";
                cin >> id;
                cout << "Enter password: ";
                cin >> password;
                Client* client = EmployeeManager::login(id, password, clients);
                if (client) {
                    cout << "Login successful!" << endl;

                } else {
                    cout << "Login failed." << endl;
                }
                break;
            }
            case 6: {
                
                Client* client = nullptr; 
                EmployeeManager::employeeOptions(client);
                break;
            }
            case 0:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
