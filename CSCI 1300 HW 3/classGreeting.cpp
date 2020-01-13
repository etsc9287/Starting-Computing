// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 3

#include <iostream>
using namespace std;

//Algorithm: Say "Hello" to our user based on their course number
    //1. take course number parameter
    //2. Greet the user, including the course number in the parameter
//Input parameters: course number (int)
//Output: "Hello, CS (course number) world!"
//Returns: none

void classGreeting(int course_number)
{
    cout << "Hello, CS " << course_number << " World!" << endl; //Greets the user based on course #

}

int main() {
    //test 1
    //expected output
    //Hello, CS 10000 World!
    int test1 = 10000;
    classGreeting(test1);
    
    //test 1
    //expected output
    //Hello, CS 349 World!
    int test2 = 349;
    classGreeting(test2);
    
    return 0;
}