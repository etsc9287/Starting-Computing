// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 5 - Problem # 4

#include <iostream>
#include <string>
using namespace std;

//Algorithm: Shifts each letter in a message n spaces to the left or right
    //1. take any string, a shifting number, and bool flag as parameters
    //2. Loop through checking all the letters, new string = old string + or - shift
    //3. Find a way to shift from the ending letters back to beginning letters using ASCII table
    //4. there should be two separate if statements depending on if flag is true or false
    //5. return the new message.
//Input parameters: any string, key, bool flag
//Output: encrypted or decrypted message
//Returns: encrypted or decrypted message

string caesarCipher(string message, int key, bool flag)
{
    string newMessage = ""; //new message initialized as empty string
    
    if (key >= 0 && key <= 25)
    {
        for (int i = 0; i < message.length(); i++)
        {
            if (flag == true) //encrypting
            {
                if (message[i] >= 65 && message[i] <= 90) //only replace uppercase letters with letters in new message
                {
                    if (message[i] + key > 90)
                    {
                        newMessage += message[i] + key - 26; //allows looping back from end of alphabet back to beginning
                    }
                    else
                    {
                        newMessage += message[i] + key; //shift new message certain amount of keys
                    }
                }
                else
                {
                    newMessage += message[i]; //ignore all non-uppercase letters
                }
            }  
        
            else if (flag == false) //decrypting
            {
                if (message[i] >= 65 && message[i] <= 90)
                {
                    if (message[i] - key < 65)
                    {
                        newMessage += message[i] - key + 26;
                    }
                    else
                    {
                        newMessage += message[i] - key;
                    }
                }
                else
                {
                    newMessage += message[i];
                }
            }
        } 
    }
    else //error is key outside range of 0-25
    {
        return "ERROR";
    }

    
    return newMessage;
}

int main() {
    
    //test 1
    //expected output
    //ABCD
    //explanation: YZAB shifted one letter right encodes ZABC
    string test1 = caesarCipher("YZAB", 1, true);
    cout << test1 << endl;
    
    //test 2
    //expected output
    //YZAB
    //explanation: ABCD shifted two letters left decodes YZAB
    string test2 = caesarCipher("ABCD", 2, false);
    cout << test2 << endl;
    
    return 0;
}