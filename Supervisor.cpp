/**
 * @file Supervisor.cpp
 * @author Daniel Way
 * @date 2024-04-18
 * @brief Implementation of the Supervisor class
 * 
 * Where all the functions that were defined in Supervisor.h get called
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() {
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
