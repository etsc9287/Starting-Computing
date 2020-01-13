// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 6 - Problem # 8

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

//Algorithm: Populate a pair of arrays for titles and authors
    //1. take split function as seen on last week's hw
    //2. Create special conditions of returning -1 or 0 when file doens't open or numBookStored = size.
    //3. After reading file, use split to separate titles and authors
    //4. Create new array of size 2 that stores author and title.
    //5. if the line length is 0, read over that line
    //6. if the line length isn't 0, authors go in element 0 of new array and titles go into element 1
//Input parameters: string fileName, string titles[], string authors[], int numBookStored, int size
//Output: none, stores in titles and authors arrays
//Returns: -1 if file isn't read, -2 if size equals numBooksStored, size of array otherwise

int split (string str, char c, string arr[], int length)
{
    if (str.length() == 0) 
    {
        return 0; //no elements if the string length is 0
    }
    string word = "";
    int j = 0;
    str = str + c; //adds delimiter to end of string to correctly count number of elements
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c) 
        {
        	if (word.length() == 0) continue;
        	if (j < length)
        	{
        	    arr[j] = word; //stores split up words in array
        	}
            j++; //count amount of times different split strings of characters occurs, delmiters dismissed as ""
            word = "";
        } 
        else 
        {
            word = word + str[i]; //add characters together if delimiter isn't present
        }
    }
    if (j > length)
    {
        return -1; //return -1 if words exceeds our array length
    }

    return j;
}

int getRating(string username, string book_title, string users[], string titles[], int ratings[][50], int num_users, int num_books)
{
    string array[51]; 
    string line;
    ifstream fp;
    fp.open("ratings.txt");
    if (fp.is_open())
    {
        while (getline(fp, line))
        {
            
        }
        return -3;
    }
}

int main(){
    
    //test 1

    string users[2] = {"adam", "eric"};
    string titles[3] = {"Hatchet", "Eragon", "Life of Pi"};
    int ratings[2][3] = {{1,4,2},{0,5,3}};
    int test1 = getRating("adam", "Hatchet", users, titles, ratings, 2, 3);
    cout << test1 << endl;
}