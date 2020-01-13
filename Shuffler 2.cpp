#include "Shuffler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

Shuffler::Shuffler(){
    
    code = 0;
}

Shuffler::Shuffler(int code[], int size){
    
    code = code;
}

int Shuffler::getCode(){
    
    return code;
}

int Shuffler::getsizeCode(){
    
    return size;
}

void Shuffler::sortCode(string fileName){
    
    //1. Bubble sorting algorithm that comes after all enemies
    //2. User will need to sort numbers 1,2,3,4 to match randomly chosen line in Shuffler.txt to blow up death star.
    //3. This sorted code will be written to a a file, which will then be compared to the chosen line in Shuffler.txt
    //4. Game ends
}