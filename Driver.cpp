#include "Hero.h"
#include "Emperor.h"
#include "StormTrooper.h"
#include "Shuffler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void game(){
    
    //1. Welcome user to the Death Star, they encounter first group of stormtroopers
    //2. While stormtroopers or hero haven't run out of health, alternate between attacking and defending menus
    //  *Attacking/Defending menus contain all complex functions in Hero class
    //3. If hero runs out of health, end the game and give option to restart
    //4. If stormtroopers run out of health, reset hero health and move on to next clan
    //5. Repeat 2-4 for all three stormtrooper clans
    //6. When all clans are defeated, move on to emperor
    //7. While emperor or hero haven't run out of health, alternate between attacking and defending menus
    //8. If hero runs out of health, end the game and give option to restart
    //9. If emperor runs out of health, alert the user that they can now try to destroy the death star
    //10. Move on to shuffler function if the user chooses "yes".  If "no", hero escapes and game ends
    //11. The user has 5 tries to shuffle the matching code.  If they fail, they get killed by backup.  If they succeed, they win.
    
}

int main()
{
	// start the game! 
	game();
	return 0;
}