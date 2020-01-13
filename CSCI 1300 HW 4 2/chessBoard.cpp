// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 4 - Problem # 4

#include <iostream>
using namespace std;

//Algorithm: Figures out if inputted square on a chessboard is a light or dark square
    //1. take a character and and an integer as parameters
    //2. check if the two inputs combine to equal a light square or dark square
    //3. Print the appropriate description of the square based on its color (white or black)
//Input parameters: a-h (chars) and 1-8 (ints)
//Output: prints black or white (strings)
//Returns: none

void chessBoard(char letter, int number)
{
    if (letter == 'a' || letter == 'c' || letter == 'e' || letter == 'g') //if character is a,c,e,g...
    {
        
         if (number % 2 == 1 && number <= 8 && number >= 1) 
         {
             cout << "black" << endl; //all odd number squares between 1 and 8 are black
         }
         
         else if (number % 2 == 0 && number <= 8 && number >= 1)
         {
             cout << "white" << endl; //all even number squares between 1 and 8 are white
         }
         
         else 
         {
             cout << "Chessboard squares can only have letters between a-h and numbers between 1-8" << endl;
         } //this will be triggered if a number greater than 8 and less than 1 is entered
         
    
    }
   
    else if (letter == 'b' || letter == 'd' || letter == 'f' || letter == 'h') //if character is b,d,f,h...
    {
        
        if (number % 2 == 0 && number <= 8 && number >= 1) 
        {
            cout << "black" << endl; //all even number squares between 1 and 8 are black
        }
        
        else if (number % 2 == 1 && number <= 8 && number >= 1)
        {
            cout << "white" << endl; //all odd number squares between 1 and 8 are white
        }
        
        else 
        {
            cout << "Chessboard squares can only have letters between a-h and numbers between 1-8" << endl;
        } //this will be triggered if a number greater than 8 and less than 1 is entered
    }
    
    else 
    {
         cout << "Chessboard squares can only have letters between a-h and numbers between 1-8" << endl;
    } //this will be triggered if a character aside from a-g is entered
}

int main() {
    
    //test 1
    //expected output
    //"black"
    char test1 = 'a';
    int test2 = 1;
    chessBoard(test1, test2);
    
    //test 2
    //expected output
    //"white"
    double test4 = 'b';
    double test5 = 3;
    chessBoard(test4, test5);
    
    return 0;
}