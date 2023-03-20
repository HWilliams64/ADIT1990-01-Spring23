#include <iostream>
#include <array>

using namespace std;

array<int, 5> myFunction(array<int, 5> my_array){
    for(int i = 0; i < 5; i ++) cout << my_array[i] << ' ';
    return my_array;
}

int main() {
  int simple_array[7]{1, 2, 3, 4};
  array<int, 5> array_class {1, 2, 3, 4};
  
  myFunction(array_class);
  



}