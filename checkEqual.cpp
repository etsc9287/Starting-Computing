// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 3

#include <iostream>
using namespace std;

//Algorithm: Check if 3 inputted numbers are equal, all different, or neither
    //1. take three numbers as parameters
    //2. check if the three numbers are all the same, all different, or neither
    //3. print the appropriate description of the three numbers based on the checks.
//Input parameters: 3 numbers (ints)
//Output: prints all different, all same, or neither (strings)
//Returns: none

void checkEqual(int num1, int num2, int num3)
{
    if (num1 != num2 && num2 != num3 && num1 != num3)
    {
        cout << "All different" << endl; //If all numbers don't equal eachother, they are all different
    }
    
    else if (num1 == num2 && num2 == num3)
    {
        cout << "All same" << endl; //If all numbers equal eachother, they are the same.
    }
    
    else
    {
        cout << "Neither" << endl; //If neither of these cases occurs, we print "neither"
    }
}

int main() {
    
    //test 1
    //expected output
    //"All same"
    double test1 = 5;
    double test2 = 5;
    double test3 = 5;
    checkEqual(test1, test2, test3);
    
    //test 2
    //expected output
    //"Neither"
    double test4 = 2;
    double test5 = 5;
    double test6 = 5;
    checkEqual(test4, test5, test6);
    
    return 0;
}