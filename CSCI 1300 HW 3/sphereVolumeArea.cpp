// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 4

#include <iostream>
#include <math.h>
using namespace std;

//Algorithm: Print volume and surface area of a sphere based on radius.
    //1. input user for a radius
    //2. use the sphere volume and surface area formulas to calculate these variables
    //3. print the volume and surface area
//Input parameters: user inputs radius (double)
//Output: prints volume and surface area (double)
//Returns: none

int main(){
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius; // inputs user for radius
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3); //sphere volume formula
    cout << "volume: " << volume << endl;
    double surface_area;
    surface_area = (4.0) * M_PI * pow(radius, 2); //sphere surface area formula
    cout << "surface area: " << surface_area << endl;
   
}