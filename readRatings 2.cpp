// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 6 - Problem # 7

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

//Algorithm:
    //1. Create special cases if file doesnt open or numUsers = maxRows
    //2. return the maximum num of rows if it matches the index
    //3. Use the split function to split all 51 rows by ","
    //4. Put the 0th element of this array ito users[]
    //5. Convert the strings of numbers in the rest of the elements into integers and but them into ratings[][50]
    //6. return the incremented number of users
//Input parameters: string fileName, string users[], int ratings[][50], int numUsers, int maxRows, int maxColumns
//Output: none
//Returns: -2 if users = rows, -1 if file doesn't open, numusers in system otherwise

int split(string str, char c, string arr[], int length)
{
    if (str.length() == 0) 
    {
        return 0; //no elements if the string length is 0
    }
    string word = ""; 
    int j = 0;
    str = str + c; //adds delimiter to end of string to correctly count number of elements
    for(int i = 0; i < str.length(); i++)
    { 
        if(str[i] == c)
        {
        	if(word.length() == 0) continue;
            if(j < length)
            {
                arr[j] = word; //stores split up words in array

            }
            j++; //count amount of times different split strings of characters occurs, delmiters dismissed as ""
            word = "";
        } 
        else 
        { 
            word = word + str[i];  //add characters together if delimiter isn't present
        }
    }
    if(j > length)
    {
        return -1; //return -1 if words exceeds our array length
    }
    return j;
}
    
int readRatings(string fileName, string users[], int ratings[][50], int numUsers, int maxRows, int maxColumns)
{
    string array[51]; 
    string line; 
    ifstream fp;
    fp.open(fileName);
    int i = numUsers;
    if (numUsers == maxRows)
    {
        return -2; //special case when users equals rows
    }
    if (fp.fail())
    {
        return -1; //special case when file doesn't open
    }
    else if (fp.is_open())
    {
        while (getline(fp, line))
        {
            if (i == maxRows)
            {
                return maxRows; //return the maximum num of rows if it matches the index
            }
            int j = split(line, ',', array, 51); //splits each row of length 51 by delimiter ","
            
            if (line.length() != 0)
            {
                users[i] = array[0]; //first element of each array is the user giving ratings
                for (int h = 0; h < j-1; h++)
                {
                    ratings[i][h]  = stoi(array[h+1]); //stores the rest of the elements (ratings) in 2D array
                }
                i++;
            }
        }
        return i;
    }
}


int main(){
    
    //test 1
    //expected output
    //-2
    string users[10] = {};
    int ratings[10][50] = {{0}};
    int numUsers = 10;
    int maxRows = 10;
    int maxColumns = 50; 
    cout << readRatings("ratings.txt", users, ratings, numUsers, maxRows, maxColumns) << endl;
    
    //test 2
    //expected output
    //10
    string users2[10] = {};
    int ratings2[10][50] = {{0}};
    int numUsers2 = 0;
    int maxRows2 = 10;
    int maxColumns2 = 50; 
    cout << readRatings("ratings.txt", users2, ratings2, numUsers2, maxRows2, maxColumns2) << endl;
    
    return 0;
}