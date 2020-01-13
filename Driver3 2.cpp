#include "Hero.h"
#include "Emperor.h" //3 / 4 classes implemented
#include "StormTrooper.h"
//#include "Shuffler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int rollDie()
{
	return random() % 6 + 1; //simulates random roll of 6 sided dice
}
int rollDie100()
{
	return random() % 100 + 1; //will simulate random nums out of 100
}
int rollDie3()
{
	return random() % 3 + 1; //simulates random roll of 3 sided dice
}
int rollDie2()
{
	return random() % 2 + 1; //simulates coin flip
}


int lightsaberAttack(string attack_type, int lightsaber_offense){ //takes lightsaber attack type (push or crush) and lightsaber offense capability
    
    //1. This function will activate if the user chooses to attack with a lightsaber
    //2. user can choose what type of saber attack (stab or slice), passed in parameter
    //3. Random probability will determine whether stab/slice is successful.  
    //4. health taken from enemy if successful attack = lightsaber offense
    //returns health taken away from enemy (int)
    
    srand (time(NULL));
    int health_effect;
    int dice_roll = rollDie();

    if (attack_type == "1") //stab
    {
         if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3)
         {
             health_effect = (lightsaber_offense + 5) * -1; //stabbing is less likely to deal damage than slicing, but deals more damage if it lands
         }
         else
         {
             health_effect = 0;
         }
    }
    else if (attack_type == "2") //slice
    {
        if (dice_roll >= 1 & dice_roll <= 4)
        {
            health_effect = lightsaber_offense * -1;
        }
        else
        {
            health_effect = 0;
        }
    }
        
    return health_effect;
}
int lightsaberAttackEmperor(string attack_type, int lightsaber_offense){
    
    //1. This function will activate if the user chooses to attack the emperor with a lightsaber
    //2. user can choose what type of saber attack (stab or slice), passed in parameter
    //3. Random probability will determine whether stab/slice is successful.  
    //4. health taken from enemy if successful attack = lightsaber offense
    //returns health taken away from enemy (int)
    
    srand (time(NULL));
    int health_effect;
    int dice_roll = rollDie();
    
    if (attack_type == "1") //stab
    {
         if (dice_roll == 1 | dice_roll == 2) //probabilities less favorable for user since emeperor is stronger
         {
             health_effect = (lightsaber_offense + 5) * -1;
         }
         else
         {
             health_effect = 0;
         }
    }
    else if (attack_type == "2") //slice
    {
        if (dice_roll >= 1 & dice_roll <= 3)
        {
            health_effect = lightsaber_offense * -1;
        }
        else
        {
            health_effect = 0;
        }
    }
        
    return health_effect;
}

int forceAttack(string force_type, int force_offense){ //takes force type (crush or push), force offense capabilities
    
    //1. This function will activate if the user chooses to attack with the force
    //2. user can choose what type of force attack (crush or push), passed in parameter
    //3. Random probability will determine whether crush/push is successful. 
    //4. health taken from enemy if successful attack = force offense
    //returns health taken away from enemy (int)
    
    srand (time(NULL));
    int health_effect;
    int dice_roll = rollDie();
    
    if (force_type == "2") //crush
    {
         if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3)
         {
             health_effect = (force_offense + 5) * -1; //crushing is less likely to succeed but deals more damage if it does
         }
         else
         {
             health_effect = 0;
         }
    }
    else if (force_type == "1") //push
    {
        if (dice_roll >= 1 & dice_roll <= 4)
        {
            health_effect = force_offense * -1;
        }
        else
        {
            health_effect = 0;
        }
    }
        
    return health_effect;
}

int forceAttackEmperor(string force_type, int force_offense){
    
    //1. This function will activate if the user chooses to attack with the force
    //2. user can choose what type of force attack (crush or push), passed in parameter
    //3. Random probability will determine whether crush/push is successful. 
    //4. health taken from enemy if successful attack = force offense
    //returns health taken away from enemy (int)
    
    srand (time(NULL));
    int health_effect;
    int dice_roll = rollDie();
    
    if (force_type == "2") //crush
    {
         if (dice_roll == 1 | dice_roll == 2)
         {
             health_effect = (force_offense + 5) * -1; //again, probabilities less favorable when attacking emperor
         }
         else
         {
             health_effect = 0;
         }
    }
    else if (force_type == "1") //push
    {
        if (dice_roll >= 1 & dice_roll <= 3)
        {
            health_effect = force_offense * -1;
        }
        else
        {
            health_effect = 0;
        }
    }
    return health_effect;
}

int noAttack(){
        
    //1. This function will activate if the user chooses not to attack
    //2. Random probbility will determine if the hero gains health by saving energy
    
    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie();
    
    if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3)
    {
        health_effect = 0;
    }
    else if (dice_roll == 4 | dice_roll == 5)
    {
        health_effect = 5;
    }
    else
    {
        health_effect = 10;
    }
    
    return health_effect;
}

int noAttackEmperor(){
        
    //1. This function will activate if the user chooses not to attack
    //2. Random probbility will determine if the hero gains health by saving energy
    
    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie();
    
    if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3 | dice_roll == 4)
    {
        health_effect = 0;
    }
    else if (dice_roll == 5)
    {
        health_effect = 5;
    }
    else
    {
        health_effect = 10;
    }
    
    return health_effect;
}

int lightsaberDefend(string block_type, int lightsaber_defense, int blaster_power){
    
    //1. This function will activate if the user chooses to defend
    //2. user can choose what type of block (left, center, or right), passed in parameter
    //3. random probability will determine which block is successful.  
    //4. health taken away from hero = blaster power from stormtrooper class
    //returns health taken away from hero, or health taken away from enemy if block is successful

    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie100(); //corresponds with lightsaber defense capabilities
    string correct_block_type = to_string(rollDie3()); //1/3 chance of block type being correct
    
    if (block_type == correct_block_type) //if it is correct...
    {
        if (dice_roll <= lightsaber_defense) //if random number < characters's lightsaber defense, character gains 10 health
        {
            health_effect = 10;
        }
        else
        {
            health_effect = (blaster_power - 5) * -1; //if not, blaster power of stormtrooper harms user
        }

    }
    else
    {
        health_effect = blaster_power * -1; //getBlasterPower() * -1;
    } 
    return health_effect;
}

int lightsaberDefendEmperor(string block_type, int lightsaber_defense, string emperor_attack_type){
    
    //1. This function will activate if the user chooses to defend
    //2. user can choose what type of block (left, center, or right), passed in parameter
    //3. random probability will determine which block is successful.  
    //4. health taken away from hero = emperor lightning or lightsaber power
    //returns health taken away from hero, or health taken away from enemy if block is successful

    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie100();
    string correct_block_type = to_string(rollDie3());
    
    if (block_type == correct_block_type)
    {
        if (dice_roll <= lightsaber_defense)
        {
            health_effect = 10;
        }
        else
        {
            if (emperor_attack_type == "lightsaber")
            {
                health_effect = 0; //if the user blocks correctly, damage won't be as bad
            }
            else
            {
                health_effect = 0; //lighting is stronger than lightsaber
            }
        }

    }
    else
    {
        if (emperor_attack_type == "lightsaber")
        {
            health_effect = 0;
        }
        else
        {
            health_effect = 0;
        }
    } 

    return health_effect;
}

int noDefend(){
    
    //1. This function will activate if the user chooses not to defend
    //2. Random probbility will determine if enemy attack hits the hero.  If it does, return lost health.
    //   If it doesn't, return possible health gained by hero for saving energy.
    
    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie();
    
    if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3 | dice_roll == 6)
    {
        health_effect = -12; //getBlasterPower * -1;
    }
    else if (dice_roll == 4 | dice_roll == 5)
    {
        health_effect = 5;
    }

    return health_effect;
}

int noDefendEmperor(string emperor_attack_type){
    
    //1. This function will activate if the user chooses not to defend
    //2. Random probbility will determine if enemy attack hits the hero.  If it does, return lost health.
    //   If it doesn't, return possible health gained by hero for saving energy.
    
    srand (time(NULL)); //Adds complete randomness to program
    int health_effect;
    int dice_roll = rollDie();
    
    if (dice_roll == 1 | dice_roll == 2 | dice_roll == 3 | dice_roll == 6 | dice_roll == 5)
    {
        if (emperor_attack_type == "lightsaber")
        {
            health_effect = -30;
        }
        else
        {
            health_effect = -40;
        }
    }
    else if (dice_roll == 4)
    {
        health_effect = 10;
    }

    return health_effect;
}

void writeReview()
{
    string review;
    cout << "Thank you for playing my Star Wars adventure game! If you would like to leave a review, you may write" << endl;
    cout << "it to my reviews file using this space:" << endl;
    cin >> review;
    
    ofstream review_file("reviews.txt");
    if (review_file.is_open())
    {
        review_file << "Automatic 110 percent final grade - Professor Tony Wong" << endl; //user can write review to reviews.txt
        review_file << "We will give this kid a job cuz of this game - Google" << endl;
        review_file << "Sued for copyright violations - Electronic Arts" << endl;
        review_file << review << " - Super Cool TA" << endl;
        review_file.close();
    }  
    else
    {
        cout << "File failed to open" << endl;
    }
}


void bubbleSort(int code[], int size) //sorting algorithm at the end of the game (extra credit), will take random code of size 10
{
    int shift;
    for (int i = 1; i < size; i++) //check every element in the array
    {
        for (int j = 0; j < size - i; j++) //first checks every element in array, then first 9 elements, then first 8, etc. as last elements become sorted
        {
            if (code[j] > code[j + 1]) //if one element is a bigger number than the next element:
            {
                shift = code[j];
                code[j] = code[j+1]; //switch them
                code[j+1] = shift;
            }
        }
    }
    for (int k = 0; k < size; k++)
    {
        cout << code[k] << endl; //prints sorted array
    }
}


int split (string str, char c, string arr[], int length) //used to get elements from heroes.txt and stormtroopers.txt
{
    if (str.length() == 0) {
        return 0; //no elements if the string length is 0
    }
    string word;
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

void readFile(int user_choice, string hero[5])
{
    int i = 1;
    string stats[5];
    string line;
    ifstream fp;
    fp.open("heroes.txt");
    if (fp.is_open())
    {
        while (getline(fp, line)) //reads all lines in file
        { 
            split(line, ',', stats, 5);

            if (user_choice == i) //reads line 1: obi wan
            {
                for (int j = 0; j < 5; j++)
                {
                    hero[j] = stats[j];
                    
                }
            }
            else if (user_choice == i) //line 2: luke
            {
                for (int j = 0; j < 5; j++)
                {
                    hero[j] = stats[j];
                }
            }
            else if (user_choice == i) //line 3: anakin
            {
                for (int j = 0; j < 5; j++)
                {
                    hero[j] = stats[j];
                }
            }
            i++;
        }
    }
    else
    {
        cout << "Failed to get file" << endl;
    }
}


void game(){
    
    string start_game;
    string hero_choice;
    string attack_option;
    string defend_option;
    string attack_type;
    string force_type;
    string block_type;
    string attack_option2;
    string defend_option2; //user input variables
    string attack_type2;
    string force_type2;
    string block_type2;
    string to_emperor;
    string shuffle_choice;
    string emperor_choice;
    string code_guess;
    string play_again;
    
    bool battling_stormtroopers = true;
    bool battling_emperor = false; 
    bool shuffling = false; //boolean states of game
    bool end_of_game = false;
    bool attacking = true;
    
    string hero_name;
    int hero_health;
    int lightsaber_offense; //hero stats
    int force_offense;
    int lightsaber_defense;
    string hero[5];
    Hero h;
    Emperor e;
    StormTrooper s;
    
    string trooper_name;
    int trooper_health = 50; //stormtrooper stats
    int blaster_power = 12;
    
    //int emperor_health = 100; //emperor stats
    string emperor_attack_type;
    
    int hero_health_effect;
    int trooper_health_effect; //heath accumulators
    int emperor_health_effect;
    
    int num_code[10]; //code
            
    cout << "Welcome to the Death Star Adventures!  Input 's' to start the game." << endl;
        
    while (end_of_game == false)
    {
        
        while (start_game != "s")
        {
            cin >> start_game;
            if (start_game == "s")
            {
                break; 
            } 
            cout << "Invalid input.  Input 's' to start the game." << endl;
        }
        
        cout << "You have entered the Death Star, the primary base of the imperialistic Galactic empire.  Your objective is to " << endl;
        cout << "destroy the stormtrooper clan and then fight the Emperor.  If you defeat " << endl;
        cout << "the Emperor, you may choose to depart the Death Star with your life or you may choose to undertake one final " << endl;
        cout << "challenge to destroy the imperial base, and you will need luck on your side to survive.  The game will end if " << endl;
        cout << "you lose all of your health.  May the force be with you!" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Time for you to choose your Jedi! Each varies in their health and battle capability levels, so choose wisely!" << endl;
        cout << "Input '1', '2', or '3' to choose." << endl;
        cout << "" << endl;
        cout << "1. Obi Wan Kenobi (100 starting health, 10 lightsaber offense, 20 force offense, 30 lightsaber defense)" << endl;
        cout << "2. Luke Skywalker (100 starting health, 20 lightsaber offense, 15 force offense, 15 lightsaber defense)" << endl;
        cout << "3. Anakin Skywalker (80 starting health, 25 lightsaber offense, 35 force offense, 20 lightsaber defense)" << endl;
        
        while (hero_choice != "1" | hero_choice != "2" | hero_choice != "3")
        {
            cin >> hero_choice;
            if (hero_choice == "1" | hero_choice == "2" | hero_choice == "3")
            {
                readFile(stoi(hero_choice), hero);
                h.setName(hero[0]); //stoi(hero[1]), stoi(hero[2]), stoi(hero[3]), stoi(hero[4]));
                h.setHealth(stoi(hero[1]));
                h.setLightsaberOffense(stoi(hero[2]));
                h.setForceOffense(stoi(hero[3]));
                h.setLightsaberDefense(stoi(hero[4]));
                break;
            }
            else
            {
                cout << "Invalid response.  Please choose a number (1, 2, or 3) corresponding to your Jedi of choice." << endl;
            }
        }
        
        cout << "" << endl;
        cout << "You have chosen " << h.getName() << " with starting health of " << h.getHealth() << ".  Let the battles begin!" << endl;
        cout << "" << endl;
        cout << "" << endl;

        cout << "You have encountered a Stormtrooper Clan with 25 starting health and 12 blaster power!" << endl;
        cout << "Each hit you take will subtract an amount of health corresponding to the blaster power. " << endl;
        cout << "Select the number corresponding to the menu option.  Good luck!" << endl;
        cout << "" << endl;
            
        while (battling_stormtroopers == true)
        {
            s.setHealth(75);
            
            if (h.getHealth() <= 0)
            {
                cout << "The stormtroopers killed you! Looks like the force wasn't with you this time." << endl;
                cout << endl;
                end_of_game = true; //message if user loses all health
                game();
                break;               
            }
            if (s.getHealth() <= 0)
            {
                cout << "Congrats! You made it past the clan of Stormtroopers" << endl;
                cout << endl;
                battling_stormtroopers = false; //if the user defeats the clan
                battling_emperor = true;
                break;
                    
                //Update stormtrooper stats with class / txt file
                // if (clan 3 gets <= 0 health, battling stormtroopers = false and move to emperor)
            }
            
            while (attacking == true)
            {
                cout << "Your turn to attack!" << endl;
                cout << "" << endl;
                cout << "--------------Menu--------------" << endl;
                cout << "1. Attack with lightsaber" << endl;
                cout << "2. Attack with the force" << endl; //Menu options 1-3 (not including quit/exit)
                cout << "3. Don't attack (you may heal)" << endl;
                cout << "4. Quit / Exit" << endl;
                cin >> attack_option;
                
                if (attack_option == "1")
                {
                    cout << "What type of lightsaber attack?" << endl;
                    cout << "1. Stab" << endl;
                    cout << "2. Slice" << endl; //sub options #1
                    cin >> attack_type;
                    if (attack_type != "1" & attack_type != "2")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
    
                    trooper_health_effect = lightsaberAttack(attack_type, h.getLightsaberOffense());
                    s.setHealth(s.getHealth() + hero_health_effect); //gets health effect, accumulates
                    
                    if (trooper_health_effect == 0)
                    {
                        cout << "Your attack was unsuccessful and the clan lost 0 health." << endl;
                    }
                    else
                    {
                        cout << "Your attack was successful and the clan lost " << trooper_health_effect * -1 << " health! " << " They now have " << s.getHealth() << " health." << endl;
                    }
                    
                    attacking = false;
                    break;
                }
                else if (attack_option == "2")
                {
                    cout << "What type of force attack?" << endl;
                    cout << "1. Force Push" << endl;
                    cout << "2. Force Crush" << endl;
                    cin >> force_type;
                    if (force_type != "1" & force_type != "2")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
                    
                    trooper_health_effect = forceAttack(force_type, h.getForceOffense());
                    s.setHealth(s.getHealth() + hero_health_effect); //gets health effect, accumulates
                    
                    if (trooper_health_effect == 0)
                    {
                        cout << "Your attack was unsuccessful and the clan lost 0 health." << endl;
                    }
                    else
                    {
                        cout << "Your attack was successful and the clan lost " << trooper_health_effect * -1 << " health! " << " They now have " << s.setHealth() << " health." << endl;
                    }                   
                    
                    attacking = false;
                    break;
                }
                else if (attack_option == "3")
                {
                    hero_health_effect = noAttack();
                    //hero_health = hero_health + hero_health_effect; //gets health effect, accumulates
                    h.setHealth(h.getHealth() + hero_health_effect);
                    cout << "By not attacking and saving energy, you gained " << hero_health_effect << " health and now have " << h.getHealth() << " health." << endl;
                    cout << endl;
                    
                    attacking = false;
                    break;
                }
                else if (attack_option == "4")
                {
                    end_of_game = true; //quit / exit
                    game();
                }
                else
                {
                    cout << "Invalid Response.  Please choose a number (1, 2, 3, or 4) corresponding to your action of choice." << endl;
                    cout << "" << endl;
                }
            }
            
            while (attacking == false & s.getHealth() > 0)
            {
                cout << "The Stormtroopers are now attacking! Choose your method of defense." << endl;
                cout << "" << endl;
                cout << "--------------Menu--------------" << endl;
                cout << "1. Defend with lightsaber" << endl;
                cout << "2. Don't Defend (you may heal)" << endl; //Menu options 3-5 (not including quit/exit)
                cout << "3. Quit / Exit" << endl;
                cin >> defend_option;
                
                if (defend_option == "1")
                {
                    cout << "What type of lightsaber defense?" << endl;
                    cout << "1. Block left" << endl;
                    cout << "2. Block center" << endl; //suboptions #2
                    cout << "3. Block right" << endl;
                    cin >> block_type;
                    if (block_type != "1" & block_type != "2" & block_type != "3")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
                    
                    hero_health_effect = lightsaberDefend(block_type, h.getLightsaberDefense(), blaster_power);
                    h.setHealth(h.getHealth() + hero_health_effect); //gets health effect, accumulates
                    
                    if (hero_health_effect < 0)
                    {
                        cout << "Your block was unsuccessful and you lost " << hero_health_effect * -1 << " health." << "  You now have " << h.getHealth() << " health." << endl;
                    }
                    else
                    {
                        cout << "Your block was successful and you sustained all of your health!" << endl;
                    }
                    
                    attacking = true;
                    break;
                }
                else if (defend_option == "2")
                {
                    hero_health_effect = noDefend(); //gets health effect, accumulates
                    h.setHealth(h.getHealth() + hero_health_effect);
                    
                    if (hero_health_effect >= 0)
                    {
                        cout << "By not defending and saving energy, you gained " << hero_health_effect << " health and now have " << h.getHealth() << " health." << endl;
                    }
                    else
                    {
                        cout << "Your enemy's attack succeeded and you lost " << hero_health_effect * -1 << " health. " << "  You now have " << h.getHealth() << " health." << endl;
                    }
                    
                    attacking = true;
                    break;
                }
                else if (defend_option == "3")
                {
                    end_of_game = true; //quit / exit game
                    game();
                }
                else
                {
                    cout << "Invalid Response.  Please choose a number (1, 2, 3, or 4) corresponding to your action of choice." << endl;
                    cout << "" << endl;                    
                }
            }
        }
        
        h.setHealth(100); //resets health
        cout << "Congratulations on making it past the Stormtrooper clans! You will now fight the Emperor for a chance" << endl;
        cout << "to end the Galactic Empire! You will get to attack first.  Do you wish to continue (y or n)?" << endl;
        cout << "" << endl;
        
        while (emperor_choice != "y" & emperor_choice != "n") //user chooses whether or not to fight emperor
        {
            cin >> emperor_choice;
            if (emperor_choice == "y")
            {
                cout << "Good luck and may the force be with you!" << endl;
                cout << endl;
                break; 
            }   
            else if (emperor_choice == "n")
            {
                end_of_game = true;
                game();
            }
            else
            {
                cout << "Please select y or n to continue." << endl;
            }
        }
        
        while (battling_emperor == true)
        {
            e.setHealth(100); //emperor health
            attacking = true;
            
            if (h.getHealth() <= 0) //if the emperor kills the user
            {
                cout << "The emperor killed you! Looks like the force wasn't with you this time." << endl;
                cout << endl;
                end_of_game = true;
                game();
                break;               
            }
            if (e.getHealth() <= 0) //if the user kills the emperor
            {
                cout << "Congrats! You have defeated the emperor.  One final challenge awaits you if you choose to take it..." << endl;
                cout << endl;
                battling_emperor = false;
                shuffling = true;
                break;
            }
            while (attacking == true)
            {
                cout << "Your turn to attack!" << endl;
                cout << "" << endl;
                cout << "--------------Menu--------------" << endl;
                cout << "1. Attack with lightsaber" << endl;
                cout << "2. Attack with the force" << endl;
                cout << "3. Don't attack (you may heal)" << endl;
                cout << "4. Quit / Exit" << endl;
                cin >> attack_option2;
                
                if (attack_option2 == "1")
                {
                    cout << "What type of lightsaber attack?" << endl;
                    cout << "1. Stab" << endl;
                    cout << "2. Slice" << endl;
                    cin >> attack_type2;
                    if (attack_type2 != "1" & attack_type2 != "2")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
    
                    emperor_health_effect = lightsaberAttackEmperor(attack_type2, h.getLightsaberOffense());
                    e.setHealth(e.getHealth() + emperor_health_effect); //gets health effect, accumulates
                    
                    if (emperor_health_effect == 0)
                    {
                        cout << "The emperor blocked your attack with his lightsaber!" << endl;
                    }
                    else
                    {
                        cout << "Your attack was successful and the emperor lost " << emperor_health_effect * -1 << " health! " << " He now has " << e.getHealth() << " health." << endl;
                    }
                    
                    attacking = false;
                    break;
                }
                else if (attack_option2 == "2")
                {
                    cout << "What type of force attack?" << endl;
                    cout << "1. Force Push" << endl;
                    cout << "2. Force Crush" << endl;
                    cin >> force_type2;
                    if (force_type2 != "1" & force_type2 != "2")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
                    
                    emperor_health_effect = forceAttackEmperor(force_type2, h.getForceOffense());
                    e.setHealth(e.getHealth() + emperor_health_effect); //gets health effect, accumulates
                    if (emperor_health_effect == 0)
                    {
                        cout << "The Emperor dodged your force attack with his insane force abilities!" << endl;
                    }
                    else
                    {
                        cout << "Your attack was successful and the Emperor lost " << emperor_health_effect * -1 << " health! " << " He now has " << e.getHealth() << " health." << endl;
                    }                   
                    
                    attacking = false;
                    break;
                }
                else if (attack_option2 == "3")
                {
                    hero_health_effect = noAttackEmperor(); //gets health effect, accumulates
                    h.setHealth(h.getHealth() + hero_health_effect);
                    
                    cout << "By not attacking and saving energy, you gained " << hero_health_effect << " health and now have " << h.getHealth() << " health." << endl;
                    cout << endl;
                    
                    attacking = false;
                    break;
                }
                else if (attack_option2 == "4")
                {
                    end_of_game = true;
                    game();
                }
                else
                {
                    cout << "Invalid Response.  Please choose a number (1, 2, 3, or 4) corresponding to your action of choice." << endl;
                    cout << "" << endl;
                }
            }
            
            while (attacking == false & e.getHealth() > 0)
            {
                if (rollDie2() == 1)
                {
                    emperor_attack_type = "lightsaber"; //emperor may randomly attack with force lightning or lightsaber
                }
                else
                {
                    emperor_attack_type = "force lightning";
                }
                
                cout << "The Emperor is attacking with " << emperor_attack_type << "! Choose your method of defense." << endl;
                cout << "" << endl;
                cout << "--------------Menu--------------" << endl;
                cout << "1. Defend with lightsaber" << endl;
                cout << "2. Don't Defend (you may heal)" << endl;
                cout << "3. Quit / Exit" << endl;
                cin >> defend_option2;
                
                if (defend_option2 == "1")
                {
                    cout << "What type of lightsaber defense?" << endl;
                    cout << "1. Block left" << endl;
                    cout << "2. Block center" << endl;
                    cout << "3. Block right" << endl;
                    cin >> block_type2;
                    if (block_type2 != "1" & block_type2 != "2" & block_type2 != "3")
                    {
                        cout << "Invalid Response.  Please choose valid numbers corresponding to your action of choice." << endl;
                        continue;
                    }
                    
                    hero_health_effect = lightsaberDefendEmperor(block_type2, h.getLightsaberDefense(), emperor_attack_type);
                    h.setHealth(h.getHealth() + hero_health_effect); //gets health effect, accumulates
                    
                    if (hero_health_effect < 0)
                    {
                        cout << "You couldn't block the emperor's " << emperor_attack_type << " and you lost " << hero_health_effect * -1 << " health." << "  You now have " << h.getHealth() << " health." << endl;
                    }
                    else
                    {
                        cout << "Your blocked the emperor's " << emperor_attack_type << " and you sustained all of your health!" << endl;
                    }
                    
                    attacking = true;
                    break;
                }
                else if (defend_option2 == "2")
                {
                    hero_health_effect = noDefendEmperor(emperor_attack_type); //gets health effect, accumulates
                    h.setHealth(h.getHealth() + hero_health_effect);
                    
                    if (hero_health_effect >= 0)
                    {
                        cout << "By not defending and saving energy, you gained " << hero_health_effect << " health and now have " << h.getHealth() << " health." << endl;
                    }
                    else
                    {
                        cout << "The emperor's attack succeeded and you lost " << hero_health_effect * -1 << " health. " << "  You now have " << h.getHealth() << " health." << endl;
                    }
                    
                    attacking = true;
                    break;
                }
                else if (defend_option2 == "3")
                {
                    end_of_game = true;
                    game(); //quit / exit
                }
                else
                {
                    cout << "Invalid Response.  Please choose a number (1, 2, 3, or 4) corresponding to your action of choice." << endl;
                    cout << "" << endl;                    
                }
            }
        }
        
        cout << "Your final challenge, should you choose to take it, will be to blow up the Death Star with the self destructing" << endl;
        cout << "sequence.  You will be given a list of 10 numbers anywhere from 1 to 100 and you must sort them in increasing" << endl;
        cout << "order.  The only way you can achieve this, however, is by typing the secret code word.  If you fail on your" << endl;
        cout << "5th try, backup will arrive and you will be killed.  If you succeed, you will escape the self destructing " << endl;
        cout << "Death Star and the Empire will cease to exist.  Do you choose to accept the challenge? (y or n)" << endl;
        
        while (shuffle_choice != "y" & shuffle_choice != "n")
        {
            cin >> shuffle_choice;
            if (shuffle_choice == "y") //if the user chooses to move to the shuffler
            {
                cout << "Good luck and may the force be with you!" << endl;
                cout << endl;
                break; 
            }   
            else if (shuffle_choice == "n")  //if the user doesnt want to shuffle
            {
                cout << "You are still a winner for defeating the Emperor! You escaped the Death Star with your life " << endl;
                cout << "and severely damaged the regime." << endl;
                end_of_game = true;
                game();
            }
            else
            {
                cout << "Please select y or n to continue." << endl;
            }
        }
        
        while (shuffling == true)
        {
            cout << "Here are your numbers: " << endl;
            for (int i = 0; i < 10; i++)
            {
                num_code[i] = rollDie100(); //gets random array of 10 numbers from 1-100
                cout << num_code[i] << endl;
            }
            
            cout << endl;
            cout << "Guess the secret code in order to sort the numbers: " << endl;
            
            for (int i = 0; i < 5; i++)
            {
                cin >> code_guess;
                
                if (i > 4) //gives the user 5 tries to guess right code until backup arrives
                {
                    cout << "Backup has arrived and taken away all of your health.  Your sacrifice will be remembered." << endl;
                    cout << endl;
                    end_of_game = true;
                    game();
                }
                
                if (code_guess != "sand")
                {
                    cout << endl;
                    cout << "Incorrect code.  You have " << 4-i << " trie(s) remaining." << endl;
                }
                else
                {
                    break;
                }
            }
            
            cout << endl;
            cout << "You have guessed the correct code! The code has sorted to self destruct sequence" << endl;
            bubbleSort(num_code, 10); //see bubble sort function
            cout << endl;
            cout << "You have destroyed the Death Star and the Galatic Empire.  Congratulations!" << endl;
            cout << endl;
            
            writeReview(); //see writeReview function (writes to file)
            
            cout << endl;
            cout << "Press 's' to start a new game" << endl;
            while (play_again != "s")
            {
                cin >> play_again;
                if (play_again == "s")
                {
                    end_of_game = true;
                    game();
                }
                else
                {
                    cout << "Invalid response.  Press 's' to start again" << endl;
                }
            }

        }
    }
}


int main()
{
	// start the game! 
	readFile(0,0);
	game();
	return 0;
}

//Driver Algorithm:

//1. Welcome user to the Death Star, they encounter first group of stormtroopers
//2. While stormtroopers or hero haven't run out of health, alternate between attacking and defending menus
//  *Attacking/Defending menus contain all complex functions in Hero class
//3. If hero runs out of health, end the game and give option to restart
//4. If stormtroopers run out of health, reset hero health and move on to emperor
//5. While emperor or hero haven't run out of health, alternate between attacking and defending menus
//6. If hero runs out of health, end the game and give option to restart
//7. If emperor runs out of health, alert the user that they can now try to destroy the death star
//8. Move on to shuffler function if the user chooses "yes".  If "no", hero escapes and game ends
//9. The user has 5 tries to shuffle the matching code.  If they fail, they get killed by backup.  If they succeed, they win.