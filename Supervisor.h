/**
 * @file Supervisor.h
 * @author Daniel Way
 * @date 2024-04-18
 * @brief Prototypes for the Supervisor class
 * 
 * Where the Supervisor class and it's prototypes are defined
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Holds supervisor information
 *
 * @class Supervisor Supervisor.h "DoxygenToolkit/Supervisor.h"
 * @brief Holds supervisor information
 *
 */
class Supervisor : public Employee {
private:
  int numSupervised;
public:


/**
 * Prints the information about the Supervisor, including the people they have supervised
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();
  

/**
 * Calculates the supervisor's pay
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();


/**
 * Constructor that sets the number of people supervised to -1
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();


/**
 * Initializes everything with the employee constructor and sets the Num supervised
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
