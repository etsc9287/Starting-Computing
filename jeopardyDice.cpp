// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Project 1 - Problem 3 

//Algorithm: Play jeopardy dice with computer until a player reaches 80 points. 
    //1. Create 3 of my own functions - representing computer's turn, human's turn, and additional messages
    //2. start easy - take care of welcome statements and other easy print statements first
    //3. move to human turn function which will return their total points for that turn - create user input for whether or not they would like to roll
    //4. create general if/else statements depending on original user input (y,n).  If n, end turn and player total is 0.
    //5. create conditionals for all the dice rolls.  If they end the turn, insert breaks in the if/else statements, create accumulator pattern for 1,3,6 as they can get added
    //6. create a while loop outside of these conditionals so the user can possibly continue rolling dice throughout their turn as long as they say yes, gives breaks a purpose
    //7. move to computer function which will return its total points for that turn - no user input needed
    //8. recycle the conditionals for dice rolls in human function and the accumulator pattern if 1,3,6 - same rules apply to computer
    //9. create a while loop outside of these conditionals so that the computer continues until it possibly hits 10 points
    //10. At this point, I should have a welcome message and two useful functions that return points totals for individual turns
    //11. In my game function, create variables that call my own 3 previous functions
    //12. Create a while loop that continously switches between computer turn and human turn as long as neither has reached 80 points
    //13. Create an accumulator pattern that utilizes returns from previous two functions, adds points for each turn for both players
    //14. Create conditionals that print winning messages if one player hits 80 points.
    //15. Remember seed randoms to create complete randomness
//Input parameters: see individual functions
//Output: a game that accepts y/n until the player or computer reaches 80 points.
//Returns: see individual functions

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
using namespace std; 

int rollDie()
{
	return random() % 6 + 1; //simulates random roll of the dice
}

//Function Algorithm 1:

//1. start easy - take care of welcome statements and other easy print statements first
//2. this message differs from the rest of my code as it serves as a constant starting point and will always appear in the same place no matter what

void welcomeUser(int message) //this function organizes the message that appears at the beginning of the game
{
	if (message = 1)
	{
		cout << "Welcome to Jeopardy Dice!" << endl; //beginning message
	}
}

//Function Algorithm 2: 

//1. move to human turn function which will return their total points for that turn - create user input for whether or not they would like to roll
//2. create general if/else statements depending on original user input (y,n).  If n, end turn and player total is 0.
//3. create conditionals for all the dice rolls.  If they end the turn, insert breaks in the if/else statements, create accumulator pattern for 1,3,6 as they can get added
//4. create a while loop outside of these conditionals so the user can possibly continue rolling dice throughout their turn as long as they say yes, gives breaks a purpose

int humanTurn() //this function simulates every human turn
{
	srand (time(NULL)); //Adds complete randomness to program
	
	cout << "" << endl;
	cout << "It is now human's turn" << endl;
	cout << "" << endl;
	cout << "Do you want to roll a dice (Y/N)?: " << endl;
	
	char user_answer; //represents whether or not the user chooses to roll
	int player_dice_roll; //random integer that represents roll of dice
	int player_turn_total = 0; //turn total starts at 0 each turn
	cin >> user_answer;
	
	if (user_answer == 'n' || user_answer == 'N')
	{
		player_turn_total = 0; //if player chooses not to complete their first roll on their turn, they get 0 points
	}
	
	else if (user_answer == 'y' || user_answer == 'Y')
	{
		while (user_answer == 'y' || user_answer == 'Y') //while the user wants to roll...
		{
			int player_dice_roll = rollDie(); //random integer that represents roll of dice
			cout << "You rolled a " << player_dice_roll << endl;
			if (player_dice_roll == 2 || player_dice_roll == 5)
			{
				player_turn_total = 0; //If a 2 or 5 is rolled, turn total is 0 and it switches to computer's turn
				cout << "Your turn total is " << player_turn_total << endl;
				break; //computer's turn
			}
			else if (player_dice_roll == 4)
			{
				player_turn_total = 15; //If a 4 is rolled, turn total is 15 and it switches to computer's turn
				cout << "Your turn total is " << player_turn_total << endl;
				break; //computer's turn
			}
			else if (player_dice_roll == 1 || player_dice_roll == 3 || player_dice_roll == 6)
			{
				player_turn_total = player_turn_total + player_dice_roll; //If a 1, 3, or 6 is rolled, turn total is the dice value
				cout << "Your turn total is " << player_turn_total << endl; // (accumulated with other possible rolls)
				cout << "Do you want to roll again (Y/N)?:" << endl;
				cin >> user_answer;
			}	
		}
	}

	return player_turn_total;
}

//Function Algorithm 3:

//1. move to computer function which will return its total points for that turn - no user input needed
//2. recycle the conditionals for dice rolls in human function and the accumulator pattern if 1,3,6 - same rules apply to computer
//3. create a while loop outside of these conditionals so that the computer continues until it possibly hits 10 points

int computerTurn() //this functions simulates every computer turn
{
	srand (time(NULL)); //Adds complete randomness to program
	
	cout << "" << endl;
	cout << "It is now computer's turn" << endl;
	cout << "" << endl;
	
	int computer_dice_roll; //random integer that represents roll of dice
	int computer_turn_total = 0; //turn total starts at 0 each turn
	
	while(computer_turn_total < 10)
	{
		int computer_dice_roll = rollDie(); //random integer that represents roll of dice
		cout << "Computer rolled a " << computer_dice_roll << endl;
		if (computer_dice_roll == 2 || computer_dice_roll == 5)
		{
			computer_turn_total = 0; //If a 2 or 5 is rolled, turn total is 0 and it switches to player's turn
			cout << "Computer turn total is " << computer_turn_total << endl;
			break; //player's turn
		}
		else if (computer_dice_roll == 4)
		{
			computer_turn_total = 15; //If a 4 is rolled, turn total is 15 and it switches to player's turn
			cout << "Computer turn total is " << computer_turn_total << endl;
			break; //player's turn
		}
		else if (computer_dice_roll == 1 || computer_dice_roll == 3 || computer_dice_roll == 6)
		{
			computer_turn_total = computer_turn_total + computer_dice_roll; //If a 1, 3, or 6 is rolled, turn total is the dice value
			cout << "Computer turn total is " << computer_turn_total << endl; // (accumulated with other possible rolls)
		}
	}
		
		return computer_turn_total;
}

//Game Function Algorithm

//1. In my game function, create variables that call my own 3 previous functions
//2. Create a while loop that continously switches between computer turn and human turn as long as neither has reached 80 points
//3. Create an accumulator pattern that utilizes returns from previous two functions, adds points for each turn for both players
//4. Create conditionals that print winning messages if one player hits 80 points.

void game() //this function runs the three previous functions of my choice and takes care of cumulative total, completing the game!
{
	welcomeUser(1); //prints welcome message from first function
	
	int humans_turn; //returned value, represents the amount of points the human scores in a single turn
	int computers_turn; //returned value, represents the amount of points the computer scores in a single turn
	int total_human_score = 0; //accumlating number that represents the human's total score
	int total_computer_score = 0; //accumlating number that represents the computer's total score
	
	while (total_human_score < 80 && total_computer_score < 80) //lets game continue as long as neither player has reached 80
	{
		humans_turn = humanTurn(); //calls the human turn function as human goes first
		total_human_score = humans_turn + total_human_score; //accumulates human score
		cout << "computer: "<< total_computer_score << endl;
		cout << "human: "<< total_human_score << endl; //score displays after every turn
		
		if (total_human_score >= 80)
		{
			break; //if the human wins, break the loop before the computer gets another turn	
		}
		
		computers_turn = computerTurn(); //calls the computer turn function as computer goes second
		total_computer_score = computers_turn + total_computer_score; //accumulates computer score
		cout << "computer: "<< total_computer_score << endl;
		cout << "human: "<< total_human_score << endl; //score displays after every turn
	}
	if (total_human_score >= 80) //human wins if score hits 80 or above
	{
		cout << "" << endl;
		cout << "Congratulations! human won this round of Jeopardy Dice!" << endl; //prints human win message
	}
	else if (total_computer_score >= 80) //computer wins if score hits 80 or above
	{
		cout << "" << endl;
		cout << "Congratulations! computer won this round of Jeopardy Dice!"; //prints computer win message 
	}
}

int main()
{
	// start the game! 
	game();
	return 0;
}