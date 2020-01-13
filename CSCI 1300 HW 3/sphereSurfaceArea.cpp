// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 6

#include <iostream>
#include <math.h>
using namespace std;

//Algorithm: Print surface area of a sphere based on radius.
    //1. take radius as a parameter
    //2. use the sphere surface area formula to calculate this variable
    //3. print the surface area
//Input parameters: radius (double)
//Output: prints surface area (double)
//Returns: none

double sphereSurfaceArea(double radius)
{
    double surface_area = (4.0) * M_PI * pow(radius, 2); // sphere surface area formula
    cout << "surface area: " << surface_area << endl;

}

int main() {
    
    //test 1
    //expected output
    //surface area: 314.159
    double test1 = 5;
    sphereSurfaceArea(test1);
    
    //test 1
    //expected output
    //volume: 6880.84
    double test2 = 23.4;
    sphereSurfaceArea(test2);
    
    return 0;
}