//Employee base class implementation file
#include <string>
#include <cstdlib>

#include "EmployeeBase.h"

//Constructor for initialization
Employee :: Employee(const string &theName, double theWage, double theHours)
{
  name = theName;
  wage = theWage;
  hours = theHours;
}

//Base class function to calculate pay
double Employee::calcPay() const
{
  return wage * hours;
}

//Function to get name of the employee
string Employee :: getName() const
{
  return name;
}
