//Ritika Lama
//October 14, 2023
//A program to calculate average pay and compare the pay amount of managers
//This program asks users to input the number of managers, the name of the
//managers, pay rate, and bonus amount and print the manager that gets the
//highest pay and also display the average pay.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Header and implementation files
#include "EmployeeBase.h"
#include "EmployeeBase.cpp"
#include "ManagerDerived.h"
#include "ManagerDerived.cpp"

int main()
{
  const int MAX_MANAGERS = 100;
  int numManagers;
  cout << "Enter number of managers: ";
  cin >> numManagers;

  //Array of manager
  Manager *managers[MAX_MANAGERS];

  double totalPay = 0.0;
  double highestPay = 0.0;
  string highestPaidManager;

  //Loop for data input for 'numManagers' managers
  for (int i = 0; i < numManagers; i++)
  {
    string managerName;
    double wage, bonus;
    double hoursWorked;

    cout << "\nEnter manager " << i << " name: ";
    cin.ignore(); //Clear the input buffer
    getline(cin, managerName); //Get the input name including spaces

    cout << "Enter manager " << i << " hourly wage: ";
    cin >> wage;

    cout << "Enter manager " << i << " hours worked: ";
    cin >> hoursWorked;

    cout << "Enter manager " << i << " bonus: ";
    cin >> bonus;

    //Creating Manager object dynamically
    managers[i] = new Manager(managerName, wage, hoursWorked, bonus);

    totalPay += managers[i]->calcPay(); //Total pay of all managers

    //Compare the pay of managers and get the highest pay
    if (*managers[i] > *managers[0])
    {
      highestPay = managers[i]->calcPay();
      highestPaidManager = managers[i]->getName();
    }
  }

  //calculate average pay
  double averagePay = totalPay / numManagers;

  //Display the result
  cout << "\nHighest paid manager is " << highestPaidManager
       << " who is paid $" << setprecision(2) << fixed << highestPay << "."
       << endl;
  cout << "Average pay is $" << setprecision(2) << fixed << averagePay << "."
       << endl;

  //Deletes the array of pointer to deallocate the memory
  for (int i = 0; i < numManagers; i++)
  {
    delete managers[i];
  }
  return 0;
}

