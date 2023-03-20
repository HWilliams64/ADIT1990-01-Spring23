#include <iostream>
#include <array>

using namespace std;

int main() {
  int simple_array[5]{1, 2, 3, 4};
  array<int, 5> array_class {1, 2, 3, 4};
  auto number = 9.1;
  
//   // Same for-loops
//   for(int number : array_class){
//     cout << number << endl;
//   }

//   for(int i = 0; i < array_class.size(); i++){
//     int number = array_class[i];
//     cout << number << endl;
//   }

    for(auto it = array_class.begin(); it != array_class.end(); it++){
        cout << *it << endl;
    }


}