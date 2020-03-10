#include <iostream>

using namespace std;

class StaticSample {
public:
  StaticSample(){

  }
  static void displayMessage(){ // displays message without creating object
    cout << "Hello!\n";
  }
  int getValue(){
    static int value = 0; //keeps last value of variable
    return value++;
  }
};

int main(){
  StaticSample object;
  StaticSample::displayMessage();
  cout <<  object.getValue() << endl;
  cout <<  object.getValue() << endl;
  return 0;
}
