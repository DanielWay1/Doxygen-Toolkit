/**
 * @file Employee.h
 * @author Daniel Way
 * @date 2024-04-18
 * @brief Definition and prototypes for the Employee class
 * 
 * 
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * 
 *
 * @class Employee Employee.h "DoxygenToolkit/Employee.h"
 * @brief Holds employee information
 *
 */
class Employee {

private:
  int ID; //employee ID
  int years;
  
protected:
  double hourlyRate;
  float hoursWorked;
public:

  
/**
 * Prints employee information
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();


/**
 * Calculates pay using hourly rate and hours worked
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();


/**
 * Adds years and calculates hourly rate
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();


/**
 * Constructor that sets ID, years, hours worked, and hourly rate to -1
 *
 * @pre 
 * @post 
 * 
 */
  Employee();


/**
 * Parameterized constructor that takes in information about the employee and puts the info where it needs to go
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
