#include <ios>
#include <iostream>

using namespace std;

int main(){

    bool yes = true;
    bool no = false;

    /*
   True   -> <= 1
   False  -> 0
   &&     -> x (Multiply)
   ||     -> + (Add)
   PEMDAS -> Order of operations
    */
    
    //bool result = yes || (yes && no);
    bool result = 3 < 4 || (4 == 4 && 10 > 100);

    int puchasePrice = 100;
    int ccBalance = 1000;
    bool canBuy = puchasePrice < ccBalance;

    cout << boolalpha;
    cout << "Result: "<< result <<endl;
  return 0;
}