// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 7 - Problem # 1,2

#include "Planet.h"
#include <iostream>
#include <math.h>
using namespace std;

//Algorithm (#1): make a planet class, find volume 
    //1. make planet class with relevent functions, members and create constructors for radius, name
    //2. initialize and return values
    //3. use the radius to apply the volume formula on the planet
//Input parameters: planet name, radius
//Output: none
//Returns: volume

Planet::Planet() {
    
    planetName = ""; //constructor
    planetRadius = 0;
    
}

Planet::Planet(string planetN, double planetR) {
    
    planetName = planetN; //initialize values
    planetRadius = planetR;
    
}

string Planet::getName(){
    
    return planetName;
}

void Planet::setName(string planetN){
    
    planetName = planetN;
}

double Planet::getRadius(){
    
    return planetRadius;
}

void Planet::setRadius(double radius){
    
    planetRadius = radius;
}

double Planet::getVolume(){
    
    double volume = (4.0/3.0) * M_PI * pow(planetRadius, 3); //formula for volume of sphere
    return volume;
}

//Algorithm (#2): find max radius in array of planets 
    //1. create error message if size is empty
    //2. get radius from class to be original max value
    //3. loop through every radius in array and check if its bigger than last value
    //4. declare a new variable to be the index that represents max index
//Input parameters: planets[], size
//Output: none
//Returns: index of max value

int maxRadius(Planet planets[], int size)
{
    if (size == 0)
    {
        return -1; //error message if array empty
    }
    else
    {
        double max = planets[0].getRadius(); //get radius from class
        int max_index = 0;
    
        for (int i = 0; i < size; i++)
        {
            if (max < planets[i].getRadius()) 
            {
                max = planets[i].getRadius(); //replace numbers through the loop if they are smaller than next number
                max_index = i; //return the index of this max value
                
            }
        }
        return max_index;
    }

}