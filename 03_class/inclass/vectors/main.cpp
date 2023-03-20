#include <array>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  array<int, 5> array_class{1, 2, 3, 4};
  vector<int> vector_class{1, 2, 3, 4, 5, 6, 7, 8};

  // Add 20 values to the end of the vector
  //   for(int i = 0; i < 20; i+= 3)
  //   vector_class.push_back(i);

  // Add the number 100 5 times
  //vector_class.insert(vector_class.begin(), 5, 100);
  
  // Remove the last value
  //vector_class.pop_back();

  // Remove the value at the 2nd index
  vector_class.erase(vector_class.begin(), vector_class.begin()+3);

  for (auto num : vector_class) cout << num << " ";

  cout << endl;

  return 0;
}