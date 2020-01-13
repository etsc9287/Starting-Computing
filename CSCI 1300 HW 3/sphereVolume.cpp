// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 5

#include <iostream>
#include <math.h>
using namespace std;

//Algorithm: Print volume of a sphere based on radius.
    //1. take radius as a parameter
    //2. use the sphere volume formula to calculate this variable
    //3. print the volume
//Input parameters: radius (double)
//Output: prints volume (double)
//Returns: none

double sphereVolume(double radius)
{
    double volume = (4.0/3.0) * M_PI * pow(radius, 3); //Volume of sphere formula
    cout << "volume: " << volume << endl;

}

int main() {
    //test 1
    //expected output
    //volume: 523.599
    double test1 = 5;
    sphereVolume(test1);
    
    //test 1
    //expected output
    //volume: 53670.6
    double test2 = 23.4;
    sphereVolume(test2);
    
    return 0;
}