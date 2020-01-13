// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 6 - Problem # 6

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

//Algorithm: Find amount of lines split by delimiter, create array of all lines
    //1. print the no books stored line in the special case that no books are stored
    //2. for each element in num_books, print our title by author statement
//Input parameters: string titles[], string authors[], int num_books
//Output: list of titles by authors depending on num_books
//Returns: none

void printAllBooks(string titles[], string authors[], int num_books)
{
    if (num_books > 0)
    {
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < num_books; i++)
        {
            cout << titles[i] << " by " << authors[i] << endl; //prints titles and authors for each num_book.
        }
    }
    else
    {
        cout << "No books are stored" << endl; //special case that num_books <= 0
    }
}

int main(){
    
    //test 1
    //expected output
    //"Here is a list of books"
    //"Calculus1 by Mathematician"
    string titles[] = {"Calculus1"};
    string authors[] = {"Mathematician"};
    printAllBooks(titles, authors,1);
    
    //test 2
    //expected output
    //"No books are stored"
    string titles2[] = {};
    string authors2[] = {};
    printAllBooks(titles2, authors2,0);
}