//
//  f_analyzer
//
//  Created by EshaO on 1/8/14.
//  For Hacker School Pairing Session
//  Copyright (c) 2014 EshaO. All rights reserved.

/* If a person were trying to start cryptographica analysis
 on an encrypted file (most likely one with monoalphabetic
 encryption. They would analyze the letter frequency of the
 alphabetic characters within the file. This program is to
 assist in this intial process of code breaking a file by
 analyzing letter frequency.
 */


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int charCount (ifstream& in);
int wordCount (istream& in);
int lineCount (ifstream& in);

int main()
{
    string fileName = "'none'";
    cout << "Please enter the text filename (or hit Enter to end program):\n";
    getline(cin, fileName);
    
    string fileText;
    ifstream inFile(fileName.c_str(), ios::in);
    //ifstream inFile("/Users/eTo/hackerschl/Test.txt", ios::in);
    
    if (inFile.fail())
    {
        cout <<endl << "Can't open the file" <<fileName <<endl;
        return 1;
    }
    
    
    int characters = charCount(inFile);
    int words = wordCount(inFile);
    int lines = lineCount(inFile);
    
    cout << "Within " << fileName << ": "
        << "There are " << characters << " character(s) " << words << " word(s)  and "
        <<lines << " line(s).\n";

    inFile.close();
    
    return 0;
}

/**Checks if file stream is good and reads each character from the file
 * @in is the file stream for whatever file user specifies
 * returns the number of characters counted */

 int charCount (ifstream& in)
 {
 int count = 0;
 char c;
 
 in.get(c);
 while (in.good())
 {
 in.get(c);
 ++count;
 //if ( c == 10 OR 13 OR "\n") ++count;
 }
 return count;
 }

/** Counts the words of each file. Reads the file until there are nolonger an words.
 * @in is the file stream for whatever file user specifie
 * Returns the number of words calculated */

int wordCount (istream& in)
{
    int count = 0;
    string line, word;
    in.clear();
    in.seekg(0,ios::beg);

    while (!in.fail())
    {
        in >> word;
        ++count;
        //cout << count <<": " << word <<"\n";
    }
    
    return count - 1;
}

/** Counts the numnber of lines from the begining of the file to the end.
 * @in is the file stream for whatever file user specifies.
 * Returns number of lines */

 int lineCount (ifstream& in)
 {
 string line_in;
 in.clear();
 in.seekg(0);
 
 int count = 0;
 while (!in.eof())
 {
     getline(in, line_in);
     count++;
 }
 return count;
 }