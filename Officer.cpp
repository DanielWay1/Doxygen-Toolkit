/**
 * @file Officer.cpp
 * @author Daniel Way
 * @date 2024-04-18
 * @brief Implementation of the Officer class
 * 
 * Where the functions from the Officer class are implemented as defined in Officer.h
 */
#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
