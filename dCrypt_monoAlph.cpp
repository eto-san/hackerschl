/* Esha Oyarijivbie
For Hacker School Pairing Session
*/

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int charCount ();
int wordCount ();
int lineCount ();

int main()
{
  do
    {
      string filename;
      cout << "Please enter the text filename (or hit Enter to end program): ";
      cin >> filename;

      ifstream infile;
      infile.open (filename.c_str()); 
      
      if (infile.fail)
    {
      cout <<endl << "Can't open the file" <<filename <<endl;
      return 1;
    }

      int characters = charCount (ifstream infile);
      int words = wordCount (ifstream infile);
      int lines = lineCount (ifstream infile);

cout << "There are " <<characters <<" character(s) " <<words <<" word(s)  and ";
cout <<lines <<" line(s) in this file.\n";

 infile.close();
 return 0;
}

/*Checks if file stream is good and reads each character from the file
@in is the file stream for whatever file user specifies
returns the number of characters counted*/

int charCount (ifstream& in)
{
  int counter = 0;

  while (infile.good())
    {
      inchar = infile.get();
      ++counter;
      if inchar==10 OR 13 OR "\n") ++counter;
    }
 return counter;
}

/* Counts the words of each file. Reads the file until there are nolonger an words.
@in is the file stream for whatever file user specifie
 Returns the number of words calculated*/

int wordCount (ifstream& in)
{
  int words = 0;
  string word;
  
  while (infile >>word) ++words;

  return words;
}

/* Counts the numnber of lines from the begining of the file to the end.
@in is the file stream for whatever file user specifies.
Returns number of lines*/

int lineCount (ifstream& in)
{
  infile.clear();
  infile.seekg(0);

 int counter = 0;
  while (!infile.eof)
    {
      line_in = infile.getline()
	++counter
	}
  return counter;
}
       
