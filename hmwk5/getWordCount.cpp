// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 5 - Problem # 2

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Figures out number of words in a sentence
    //1. take any string as a parameter
    //2. Create loop that detects one character at a time if it's a space or not
    //3. accumulate the amount of times a space occurs
    //4. return this value + 1 to get the number of words
    //4. if the string is empty, the count should add to 0
//Input parameters: any string
//Output: number of words in sentence
//Returns: number of words in sentence

int getWordCount(string s)
{
    int i = 0;
    int count = 0;
    for (i=0; i < s.length(); i++) //loops through all characters in a string
    {
        if (s[i] == 32) //count every space in the string
        {
            count ++;
        }
    }
    if (s.length() == 0) //if the string is empty, count = -1, will turn into 0.
    {
        count = -1;
    }
    return count + 1; //words = # of spaces + 1 unless the string is empty
}

int main() {
    
    //test 1
    //expected output
    //2
    //explanation: this string has one space, therefore two words
    int test1 = getWordCount("CSCI 1300");
    cout << test1 << endl;
    
    //test 2
    //expected output
    //4
    //explanation: this string has three spaces, therefore four words
    int test2 = getWordCount("I like CSCI 1300");
    cout << test2 << endl;
    
    return 0;
}