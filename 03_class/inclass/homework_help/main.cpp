#include <iostream>

using namespace std;

int main(){
   string multiLine =
    R"(T: a
A:
T: p
A: d
A: o
T: p
T:
T: l
A: g
T: e
T:




)";

    string line {};

    for (int i = 0; i < multiLine.length(); i++){
        char c = multiLine[i];
        if (c != '\n'){
            line += c;
        }
        else{
            cout << line << endl;

            // IF line is more then 1 or more chars long then update last line
            
            line = "";
        }
    }
  return 0;
}