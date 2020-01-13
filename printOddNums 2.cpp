// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Project 1 - Problem 1

#include <iostream>
using namespace std;

//Algorithm: Print all odd numbers up to a certain integer amount 
    //1. take a maximum number as a parameter
    //2. Find all of the numbers below this this max value
    //3. For any odd number below or equal to the max number, print it.
//Input parameters: number (int)
//Output: all odd numbers up to that number
//Returns: none

void printOddNums(int max_number)
{
    int number = 0; //Declaring the variable that will count up to our max value
    while (number <= max_number) //while that number is less than our max value...
    {
        if (number % 2 != 0)
        {
            cout << number << endl; //print the number if it's odd (not divisible by 2)
        }
        number++; //allows the loop to occur (number = number +1)
    }
}

int main() {
    
    //test 1
    //expected output
    //1 3 5 ... 19
    // int test1 = 20;
    printOddNums(20);
    
    //test 2
    //expected output
    //1 3 5
    // int test2 = 5;
    cout << endl;
    printOddNums(5);
    
    return 0;
}