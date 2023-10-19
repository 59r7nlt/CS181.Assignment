//Base class header file

#ifndef EMPLOYEEBASE_H
#define EMPLOYEEBASE_H

class Employee
{
  protected:
    string name;
    double wage;
    double hours;
  public:
    //Constructor to initialize the members
    Employee(const string &theName, double theWage, double theHours);

    //Function to calculate the pay
    double calcPay() const;

    //Function to get name of the employee
    string getName() const;
};
#endif // EMPLOYEEBASE_H
