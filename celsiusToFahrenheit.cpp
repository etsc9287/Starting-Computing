// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 9

#include <iostream>
#include <iomanip>
using namespace std;

//Algorithm: Find population in a year given initial population, births, deaths, and immigrants
    //1. take celsius as a parameter
    //2. multiply celsius by 9/5 and add 32 to get fahrenheit
    //3. set our fahrenheit to two decimal places
    //4. print our final temperature in fahrenheit to two decimal places
//Input parameters: celsius (int)
//Output: prints temperature in fahrenheit (float)
//Returns: none

float celsiusToFahrenheit(int celsius)
{
    float fahrenheit = (9.0/5.0) * celsius + 32; //celsius to fahrenheit formula
    cout << fixed << setprecision(2); //sets fahrenheit to two decimal places
    cout << "The temperature of " << celsius << " in Fahrenheit is " << fahrenheit << endl;
}

int main() {
    
    //test 1
    //expected output
    //The temperature of 10 in Fahrenheit is 50.00
    int test1 = 10;
    celsiusToFahrenheit(test1);
    
    //test 1
    //expected output
    //The temperature of 20 in Fahrenheit is 68.00
    int test2 = 20;
    celsiusToFahrenheit(test2);
    
    return 0;
}