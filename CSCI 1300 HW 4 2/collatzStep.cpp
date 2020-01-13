// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 2

#include <iostream>
using namespace std;

//Algorithm: Print collatz sequence based on if a number is even or odd.
    //1. take number as a parameter
    //2. check if number is even, odd or <= zero
    //3. use respective collatz formulas based on number inputted and print next step
//Input parameters: number (int)
//Output: prints collatz number (int)
//Returns: collatz

int collatzStep(int number)
{
    int collatz;
    
    if (number % 2 == 0 && number > 0)
    {
        collatz = number / 2; //if number is even and positive, collatz step is the number / 2
    }
    else if (number % 2 == 1 && number > 0)
    {
        collatz = 3*number + 1;  //if number is odd and positive, collatz step is number * 3 + 1
    }
    else //if number is negative, print 0
    {
        collatz = 0;
    }
    
    return collatz;
    
}

int main() {
    
    //test 1
    //expected output
    //16
    //explanation: 3 * 5 + 1 = 16
    double test1 = collatzStep(5);
    cout << test1 << endl;
    
    //test 2
    //expected output
    //5
    //explanation: 10 / 2 = 5
    double test2 = collatzStep(10);
    cout << test2 << endl;
    
    return 0;
}