// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Project 1 - Problem 2

#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
using namespace std;

//Algorithm: Roll two dice until they add up to a desired sum. 
    //1. take a desired sum a parameter
    //2. roll two six-sided dice
    //3. If our parameter is not between 2 and 12, print error message
    //4. while the two dice don't add to our desired sum, continue rolling and printing result
    //5. when the two dice add to our desired sum, print result and break loop
//Input parameters: desired sum amount (int)
//Output: all dice rolls until the desired sum amount is reached
//Returns: none

int rollDie()
{
return random() % 6 + 1; //this function acts as a single dice roll
}

void diceSum(int sum)
{
    int dice_roll_one; //declares variables for each dice roll
    int dice_roll_two;
    
    if (sum < 2 || sum > 12) //since two six-sided dice can only add between 2 or 12, failure to do so results in error message
    {
        cout << "The desired sum should be between 2 and 12" << endl; 
    }
    else
    {
        int count = 0; //variable that will track the amount of rolls
    
        while (dice_roll_one + dice_roll_two != sum) //while the randomly rolled dice don't add to our sum...
        {
            int dice_roll_one = rollDie();
            int dice_roll_two = rollDie(); //continue rolling and printing the output
            count ++; //accumulates count for every loop
            cout << "You rolled a " << dice_roll_one << " and a " << dice_roll_two << endl;
            
            if (dice_roll_one + dice_roll_two == sum) 
            {
            break; //when the dice finally roll to our desired sum, break the loop
            }
        }  
        cout << "Got a " << sum << " in " << count << " rolls!" << endl;
    }
}

int main() {
    
    srand (time(NULL)); //allows complete randomness.
    
    //test 1
    //expected output
    //"You rolled a <die1> and <die2>" where <die1> + <die2> = 6 on last line (Output frequencies will vary due to randomness)
    int test1 = 6;
    diceSum(test1);
    
    //test 2
    //expected output
    //"You rolled a <die1> and <die2>" where <die1> + <die2> = 3 on last line (Output frequencies will vary due to randomness)
    int test2 = 3;
    diceSum(test2);
    
    //test 3
    //expected output
    //"The desired sum should be between 2 and 12"
    int test3 = 13;
    diceSum(test3);
    
    return 0;
}