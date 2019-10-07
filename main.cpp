#include <iostream>
#include <fstream> //for File I/O
#include <string>

using namespace std;

int main()
{
  string fileName; //to get the name of the file to open
  string line; //to store a single line of a text file
  fstream fileStream; //to open a file for reading
  string input;
  string file = "data.txt.";
  int number;
  string is_open;
 
  fileName.c_str();

  cout<<"What file do you want to open? ";
  getline(cin, fileName);
  cin>>number
  //STEP 1: open the fileStream for input, using the fileName specified
  ;fileStream.open(fileName, ios::in);
  
 
  if (fileStream.is_open())
  {
    
    cout<<fileName<<" opened.\nFILE CONTENTS:\n";
    while(!fileStream.eof())
   {
            cin.ignore();
            getline(fileStream, input);
            fileName;
    }  while (!line.empty()); 
  }
  
    
  else 
  {
          cout<<fileName<<" could not be opened.\n";
  }


 //STEP 3: repeat the following until the end-of-file (eof) has been reached...
// 3A: read a line from fileStream into the variable line
// 3B: display the line, followed by an endline
//STEP 4: close the fileStream
  
   fileStream.close();
  

  return 0;
}
