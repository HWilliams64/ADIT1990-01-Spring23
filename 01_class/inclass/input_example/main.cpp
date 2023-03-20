#include <iostream>
#include <string>

using namespace std;

int main(){
  string number1, number2;  
  cout << "Please type a number:";
  getline(cin, number1);

  cout << "Please type a number:";
  getline(cin, number2);

  double result = stod(number1) + stof(number2);

//   int num1, num2, result;
//   cin >> num1;
//   cin >> num2;
//   result = num1 + num2;  
  cout << "Result: " << result << endl;

  return 0;
}