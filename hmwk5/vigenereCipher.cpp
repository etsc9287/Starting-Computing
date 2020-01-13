// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 5 - Problem # 5

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Shifts each letter in a message certain amount of spaces based on keyword
    //1. Match alphabet starting at first letter of keyword with regular alphabet
    //2. With these groups of alphabets, match letters of message with corresponding letter for new message
    //3. loop keyword again if words aren't same length
    //4. 
    //5.
//Input parameters: any string as message, any string as keyword, bool flag
//Output: encrypted or decrypted message
//Returns: encrypted or decrypted message

string vigenereCipher(string message, string keyword, bool flag)
{
    string newMessage = "";
    
    for (int i = 0; i < message.length(); i++)
    {
        if (flag == true)
        {
          
        }
    }
    return newMessage;
}

int main() {
    
    //test 1
    //expected output
    string test1 = vigenereCipher("YZAB", 1, true);
    cout << test1 << endl;
    
    //test 2
    //expected output
    string test2 = vigenereCipher("ABCD", 2, false);
    cout << test2 << endl;
    
    return 0;
}