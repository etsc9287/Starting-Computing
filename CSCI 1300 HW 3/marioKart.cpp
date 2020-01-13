// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 10

#include <iostream>
#include <math.h>
using namespace std;

//Algorithm: Find deceleration given initial speed and distance.
    //1. take initial speed and distance as parameters
    //2. use formula to calculate deceleration from initial speed and distance
    //3. return decelration and then print this value
//Input parameters: initial speed (double), distance (double)
//Output: prints deceleration (double)
//Returns: deceleration (double)


double marioKart(double initialSpeed, double distance)
{
    double deceleration = pow(initialSpeed, 2) / (distance * 2); //deceleration formula
    return deceleration; //returns deceleration
}

int main()

{
// test 1
// arguments: initial_Speed = 10 , distance = 20
// expected output: Deceleration is: 2.5
// explanation: 10^2 / (2*20) = 2.5
double test1 = marioKart(10, 20);
cout << "Deceleration is: " << test1 << endl;

// test 2
// arguments: initial_Speed = 50 , distance = 30
// expected output: Deceleration is: 41.6667
// explanation: 50^2 / (2*30) = 41.6667
double test2 = marioKart(50, 30);
cout << "Deceleration is: " << test2 << endl;

return 0;
}