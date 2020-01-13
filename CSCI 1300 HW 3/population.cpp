// CS1300 Spring 2019
// Author: Ethan Schacht
// Recitation: 304 – Hao
// Cloud9 Workspace Editor Link: https://ide.c9.io/etsc9287/es_csci1300
// Homework 3 - Problem # 8

#include <iostream>
using namespace std;

//Algorithm: Find population in a year given initial population, births, deaths, and immigrants
    //1. take initial population as a parameter
    //2. take second increments of births, deaths, and immigrants as variables
    //3. divide seconds in a year by these increments to get births, deaths, and immigrants per year
    //4. add births and immigrants to our initial population and subtract deaths to get out population in a year.
    //5. return this variable and then print the population in a year
//Input parameters: initial population (int)
//Output: prints final population (int)
//Returns: final population (int)

int population(int initial_population)
{
    int sec_inc_per_birth = 8;
    int sec_inc_per_death = 12;
    int sec_inc_per_immigrant = 27;
    int sec_in_a_year = 31536000; //60*60*24*365 = seconds in a year
    double births_per_year = sec_in_a_year / sec_inc_per_birth;
    double deaths_per_year = sec_in_a_year / sec_inc_per_death; //these divisions get us the amount of occurances per year
    double immigrants_per_year = sec_in_a_year / sec_inc_per_immigrant;
    int population_in_a_year = initial_population + births_per_year + immigrants_per_year - deaths_per_year; //adds or subracts occurances to get our population in a year
    return population_in_a_year; // returns population in a year
                                             
}

int main()

{
// test 1
// arguments: initial_population = 10000000
// expected output: population in a year: 12482000
// explanation: 10,000,000 + yearly births and immigrants - yearly deaths = 12482000
int test1 = population(10000000);
cout << "population in a year: " << test1 << endl;

// test 2
// arguments: initial_population = 100
// expected output: population in a year: 2482100
// explanation: 10,000,000 + yearly births and immigrants - yearly deaths = 2482100
int test2 = population(100);
cout << "population in a year: " << test2 << endl;

return 0;
}