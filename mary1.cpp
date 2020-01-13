#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Step 1:  Understand the processing task.
Program to reverse the lines in a file and write them to a new file. 

 - open the file for reading
 - read each line with getline() into a string
 - reverse the string
 - open a file for writing
 - write reversed string to a file
*/
/**
   Reverse a string that is passed in as a parameter.
   @param newline the string to be reversed
   Return the reversed string
*/
string reverse(string line)
{
   int j = line.length() - 1; // index of the last character
   string copyline = line;  // because we want it to have the same number of characters
   // loop through copyline, copy ch from line from the last to the first
   for (int i = 0; i < line.length(); i++)
   {
      copyline[i] = line[j];
      j--;
   }
   return copyline;
}

int main()
{
   // Step 2:  Determine which files you need to read and write.
   // Step 3:  Choose a method for obtaining the file names.
   // a) hardcode them
   // b) ask the user to input file names
   ifstream in; // for reading
   ofstream out; // for writing
   string filename1 = "Mary.txt";
   string filename2 = "mary1.txt";
   in.open(filename1); // open file for reading
   out.open(filename2); // open file for writing

   // Step 4:  Choose between line, word, and character-based input.
   string line, revLine;
   bool more = true;
   while (more)
   {
      getline(in, line); // line contains string for each line in the file
      if (in.fail())  // when the file ends
      {
         more = false;
      }
      else  // if it's not the last line
      {
         // Step 5:  With line-oriented input, might need to extract 
         // the required data.
         
         // Step 6:  Place repeatedly occurring tasks into functions.
         revLine = reverse(line);
         
         // Step 7:  If required, use manipulators to format the output.
         cout << revLine << endl;
         out << revLine << endl;
      }
   }

   in.close();
   out.close();
   return 0;
}