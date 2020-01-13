// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 2

#include <iostream>
using namespace std;

//Algorithm: Say "Hello" to our user based on their course number
    //1. Ask the user for their course number
    //2. Greet the user, including the course number they input
//Input parameters: user inputs course number
//Output: "Hello, CS (course number) world!"
//Returns: none


int main() {
    int course_number;
    cout << "Enter a CS course number:" << endl;
    cin >> course_number; // inputs the user
    cout << "Hello, CS " << course_number << " World!" << endl; //Greets the user based on course #
    return 0;
}