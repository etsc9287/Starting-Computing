// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 7

#include <iostream>
#include <math.h>
using namespace std;

//Algorithm: Convert any amount of seconds to hours, remaining minutes, and remaining seconds.
    //1. take seconds as a parameter
    //2. convert seconds to hours as an int.
    //3. find the remainder of seconds and convert this to minutes as an int.
    //4. find the remainder of seconds and keep this variable as remaining seconds
    //5. print the hours, remaining minutes, and remaining seconds.
//Input parameters: seconds (int)
//Output: prints hours, mins, secs (ints)
//Returns: none

int convertSeconds(int seconds)
{
    int hours = seconds / 3600; //converts seconds to hours (3600 seconds in an hour)
    int minutes = (seconds - (hours*3600))/60; //subtracts seconds within given hours from total seconds to get remaining seconds, divides by 60 to convert into minutes. 
    int remaining_seconds = (seconds - (hours*3600 + minutes*60)); //subtracts all seconds within given hours and minutes to get remaining seconds
    cout << hours << " hour(s) " << minutes << " minute(s) " << remaining_seconds << " second(s)" << endl;
}

int main() {
    //test 1
    //expected output
    //2 hour(s) 46 minute(s) 40 second(s)
    int test1 = 10000;
    convertSeconds(test1);
    
    //test 1
    //expected output
    //1 hour(s) 23 minute(s) 20 second(s)
    int test2 = 5000;
    convertSeconds(test2);
    
    return 0;
}