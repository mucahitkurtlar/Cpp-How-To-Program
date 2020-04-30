#include <iostream>
#include <fstream>

using namespace std;

/*
comment
comment
too many comment
*/

//one comment here

int main() {
  char c, preC, prePreC;
  ifstream myFile;
  myFile.open("comment_killer.cpp");
  myFile.get(c);
  preC = c;
  prePreC = preC; /* aaaaaaaaaaa and here */
  for(; !myFile.fail(); ) {
    if(c == '/' && preC != '\\') {
      prePreC = preC;
      preC = c;
      myFile.get(c);
      if(c == '/') {
        while (!myFile.fail() && c != '\n') {
          prePreC = preC;
          preC = c;
          myFile.get(c);
        }
      }
      else if(c == '*') {
        while (!myFile.fail()) {
          if(prePreC != '\\' && preC == '*' && c == '/') {
            break;
          }
          prePreC = preC;
          preC = c;
          myFile.get(c);
        }
        prePreC = preC;
        preC = c;
        myFile.get(c);
      }
      else {
        cout << preC;
        cout << c;
        prePreC = preC;
        preC = c;
        myFile.get(c); //the last comment

      }
    }
    else {
      cout << c;
      prePreC = preC;
      preC = c;
      myFile.get(c);
    }
  }
  myFile.close();
}
