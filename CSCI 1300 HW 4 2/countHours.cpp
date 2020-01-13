// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 6

#include <iostream>
using namespace std;

//Algorithm: Figures out hours in a month depending on the month
    //1. take an integer as a paramter from 1 to 12
    //2. For each month, check the amount of hours in that month.
    //3. Print the appropriate amount of hours based on the month checks.
//Input parameters: integer from 1 to 12 (int)
//Output: hours in that month (int)
//Returns: hours in that month (int)

int countHours(int month)
{
    int hours;
    
    switch (month) {
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            hours = 744; //If the month is Jan, Mar, May, July, Aug, Oct, Dec, the month has 744 hours
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            hours = 720; //If the month is Apr, June, Sept, Nov, the month has 720 hours
            break;
        case 2:
            hours = 672; //If the month is Feb, the month has 672 hours during a non leap year
            break;
        
        
    }

    return hours;
        
}

int main() {
    
    //test 1
    //expected output
    //720
    //explanation: April has 30 days, therefore 720 hours
    int test1 = countHours(4);
    cout << test1 << endl;
    
    //test 2
    //expected output
    //744
    //explanation: January has 31 days, therefore 744 hours
    int test2 = countHours(1);
    cout << test2 << endl;
    
    return 0;
}