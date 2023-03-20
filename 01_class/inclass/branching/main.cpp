#include <iostream>

using namespace std;

int main() {
  string userInput1, userInput2;
  cout << "Please type something in:";
  getline(cin, userInput1);

  cout << "Please type something in again:";
  getline(cin, userInput2);

  if (userInput1 == userInput2) {
    cout << "The inputs are the same" << endl;
  } else if (userInput1.find(userInput2) != string::npos){
    cout << "The second input is in the first input" << endl;
  } else if (userInput2.find(userInput1) != string::npos){
    cout << "The first input is in the second input" << endl;
  }else {
    cout << "The inputs are NOT the same" << endl;
  }
}