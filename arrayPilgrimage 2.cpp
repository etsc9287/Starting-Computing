// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 6 - Problem # 1

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Shifts each letter in a message n spaces to the left or right
    //1. declare all arrays including their sizes
    //2. Loop until we hit the size of our arrays
    //3. print respective arrays with cout << arr[index] << endl;
//Input parameters: none
//Output: four arrays
//Returns: none

int main() {
    
    float temps[] = {-459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67};
    int size = 10;
    int i = 0;
    while (i < size) //print every element of array until counter hits size of array
    {
        cout << temps[i] << endl;
        i++;
    }
    cout << "" << endl;
    
    string colors[] = {"Red","Blue","Green","Cyan","Magenta"};
    int size2 = 5;
    int j = 0; //print every element of array until counter hits size of array
    while (j < size2)
    {
        cout << colors[j] << endl;
        j ++;
    }
    cout << "" << endl;
    
    int sequence[100];
    int k = 1; //don't include 0
    while (k <= 100)
    {
        sequence[k] = k; //element of array equals incrementing index of array in this sequence
        cout << sequence[k] << endl;
        k++;
    }
    cout << "" << endl;
    
    string letter[26] = "";
    int ascii_value = 65; //starting with "A"
    int m = 0;
    for (m = 0; m < 26; m++)
    {
        letter[m] = ascii_value; //element of array equals incrementing ascii value until it reaches "Z"
        letter[m] += 32; //add a space to our string
        letter[m] += ascii_value + 32; //add lowercase version of all letters to string
        ascii_value++;
        cout << letter[m] << endl;
    }
    return 0;
}