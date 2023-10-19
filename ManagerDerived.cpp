//Manager derived class implementation file

#include "ManagerDerived.h"

//Function to calculate the total pay
double Manager :: calcPay() const
{
  double basePay = Employee::calcPay();
  return basePay + bonusAmount;
}

//Operator overloading to compare the pay amount
bool Manager :: operator > (const Manager &other) const
{
  return this->calcPay() > other.calcPay();
}
