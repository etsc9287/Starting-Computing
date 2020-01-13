// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 5

#include <iostream>
using namespace std;

//Algorithm: Figures out how many digits are in any number from -1000 to 1000
    //1. take an integer as a paramter from -1000 to 1000
    //2. check how many characters (digits) are in that integer
    //3. Print the appropriate description of amount of digits based on the checks.
//Input parameters: integer from -1000 to 1000 (int)
//Output: number of digits in integer (int)
//Returns: number of digits

int countDigits(int number)
{
    int digits;
    
    if (number > -1000 && number <= -100 || number < 1000 && number >= 100)
    {
        digits = 3; //checks if the number has 3 digits
    }
    
    else if (number >= -99 && number <= -10 || number <= 99 && number >= 10)
    {
        digits = 2; //checks if the number has 2 digits
    }
    
    else
    {
        digits = 1; //checks if the number has 1 digit
    }
    
    return digits;
}

int main() {
    
    //test 1
    //expected output
    //1
    //explanation: 5 has one digit
    double test1 = countDigits(5);
    cout << test1 << endl;
    
    //test 2
    //expected output
    //2
    //explanation: 10 has two digits
    double test2 = countDigits(10);
    cout << test2 << endl;
    
    return 0;
}