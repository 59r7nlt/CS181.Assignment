//Derived class header file

#ifndef MANAGERDERIVED_H
#define MANAGERDERIVED_H

class Manager : public Employee
{
  private:
   double bonusAmount;
  public:
   //Constructor for Manager class
    Manager(const string &theName, double theWage, double theHours, double bonus)
            : Employee(theName, theWage, theHours), bonusAmount(bonus) {}

    //Function to calculate the total pay of a manager with bonus
    double calcPay() const;

    //Operator overloading to compare the pay amount
    bool operator > (const Manager &other) const;
};
#endif // MANAGERDERIVED_H
