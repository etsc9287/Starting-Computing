// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 5 - Problem # 1

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Figures out number of digit characters in a string
    //1. take any string as a parameter
    //2. Create loop that detects one character at a time if it's a digit or not
    //3. use the ascii table to determine what numbers represent 0-9
    //4. accumulate the amount of times a digit occurs
//Input parameters: any string
//Output: number of digit characters in the string
//Returns: number of digit characters in the string

int getDigitCount(string s)
{
    int i = 0;
    int count = 0;
    for (i=0; i < s.length(); i++) //loops through all characters in the string
    {
        if (s[i] >= 48 && s[i] <= 57) //represents 0-9 on ascii table
        {
            count ++; //accumulate count for each 0-9 character
        }
    }
    return count;
}

int main() {
    
    //test 1
    //expected output
    //2
    //explanation: this string has 2 digit characters
    int test1 = getDigitCount("49xy");
    cout << test1 << endl;
    
    //test 2
    //expected output
    //5
    //explanation: this string has 5 digit characters
    int test2 = getDigitCount("f9g6s8c1v0");
    cout << test2 << endl;
    
    return 0;
} 