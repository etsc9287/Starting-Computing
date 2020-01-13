// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 1

#include <iostream>
using namespace std;

//Algorithm: Print sign of a number based on paramater input
    //1. take number as a parameter
    //2. check if number is positive, negative or zero
    //3. print number's sign based on input.
//Input parameters: number (int)
//Output: prints sign of number (string)
//Returns: none

void numberSign(int number)
{
   if (number == 0)
   {
       cout << "zero" << endl; //Print "zero" if 0 is paramter
   }
   
   else if (number > 0)
   {
       cout << "positive" << endl; //print "positive" if paramter is positive
   }
   
   else
   {
       cout << "negative" << endl; //print "negative" is paramter is negative
   }
}

int main() {
    
    //test 1
    //expected output
    //"positive"
    double test1 = 5;
    numberSign(test1);
    
    //test 2
    //expected output
    //"negative"
    double test2 = -5;
    numberSign(test2);
    
    return 0;
}
