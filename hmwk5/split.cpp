// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 5 - Problem # 3

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Figures out number of words in a sentence
    //1. take any string and a delimiter as parameters
    //2. Create loop that counts each character that isn't delimiter, prints it
    //3. Create loop that counts each character that is delimiter, print new paragraph each time
    //4. # of lines = delimiters (not inclduing consecutive ones) + 1, return count + 1
    //5. Create loop that detects if theres consecutive delimiters, don't create new paragraph here
//Input parameters: any string, delimiter
//Output: all phrases between delimiters in different lines
//Returns: number of words in sentence

int split(string s, char delimiter)
{
    int i = 0;
    int count = 0;
    
    while (s[i] == delimiter) 
    {
        i ++; //count each time a delimiter occurs
    }
    
    
    while (i < s.length()) { //while counter is less than the string length..
        
        if (s[i] != delimiter) 
        {
            cout << s[i]; //print all characters that aren't delimiter 
            i ++;
        }
        else 
        {
            count ++; //count each time delimiter occurs
            while (s[i] == delimiter) 
            {
                i ++;
            }
            cout << endl;
        }
    }
    
    if (s.length() == 0)
    {
        count = -1; //count will equal 0 in the end if the parameter is an empty string
    }
    
    if (s[s.length()-1] == delimiter) 
    {
        return count;
    }
    
    return count + 1; //Number of different lines based on delimiter separation
    
}

int main() {
    
    //test 1
    //expected output
    //cow bigpig fish (separate lines)
    //explanation: lines separated by delimiters
    int test1 = split("cow/bigpig//fish",'/');
    cout << "" << endl;
    cout << test1 << endl;
    
    //test 2
    //expected output
    //v tam n (separate lines)
    //explanation: lines separated by delimiters
    int test2 = split("vitamin", 'i');
    cout << "" << endl;
    cout << test2 << endl;
    
    return 0;
}