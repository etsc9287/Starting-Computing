// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 7

#include <iostream>
using namespace std;

//Algorithm: Figures out if an input year is a leap year
    //1. take an integer as a paramter from 1 to 12
    //2. For each month, check the amount of hours in that month.
    //3. Print the appropriate amount of hours based on the month checks.
//Input parameters: year (int)
//Output: 0 or 1 (bool)
//Returns: leapyear (bool)

bool checkLeapYear(int year)
{
    bool leapYear = false; // the year is not a leap year by default..
    if ((year <= 1582 && year % 4 == 0) || (year > 1582 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
    { //All years before or during 1582 divisible by 4 are leap years. After 1582, leap years must be divisible by 4 unless it is also divisible by 100.  However, a leap year can be divisible by 100 if it's also divisible by 400
        leapYear = true;  
    }
    
    return leapYear;
    
}

int main() {
    
    //test 1
    //expected output
    //1
    //explanation: 2016 is a leap year
    bool test1 = checkLeapYear(2016);
    cout << test1 << endl;
    
    //test 2
    //expected output
    //0
    //explanation: 1900 is not a leap year
    bool test2 = checkLeapYear(1900);
    cout << test2 << endl;
    
    return 0;
}
