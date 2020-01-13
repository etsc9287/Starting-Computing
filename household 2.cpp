#include <iostream>
#include <string>
#include "household.h"
using namespace std;

// Default constructor
Household::Household() {
   name = "";
   income = 0;
}

// Parameterized constructor
Household::Household(string str, double inc) {
   name = str;
   income = inc;
}

// GETTER fcn to return income
double Household::getIncome() {
   return income;
}

// GETTER fcn to return name
string Household::getName() {
   return name;
}

// SETTER fcn to set household income
void Household::setIncome(double inc) {
   income = inc;
}

// SETTER fcn to set household name
void Household::setName(string str) {
   name = str;
}

// GETTER fcn to display the household details
void Household::display() {
   cout << name << " : " << income << endl;
}