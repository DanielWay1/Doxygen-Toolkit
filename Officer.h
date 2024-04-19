/**
 * @file Officer.h
 * @author Daniel Way
 * @date 2024-04-18
 * @brief Officer information
 * 
 * Prototypes for the Officer class
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Officer class inherits employee information and defines the evilness of said officer
 *
 * @class Officer Officer.h "DoxygenToolkit/Officer.h"
 * @brief Officer info and evilness
 *
 */
class Officer : public Employee {
private:
  double evilness;
public:
/**
 * Prints the information about the officer and then outputs the evilness level
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();


/**
 * Calculates pay by adding hourly rate and evilness and multiplying it by hours worked
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();


/**
 * Constructor that sets evilness to 500
 *
 * @pre 
 * @post 
 * 
 */
  Officer();


/**
 * Call the constructor of the Employee class with some parameters and then assigns the value of evilness to the evilness member variable
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre 
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
