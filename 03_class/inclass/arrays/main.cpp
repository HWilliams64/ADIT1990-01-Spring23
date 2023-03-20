#include <iostream>
#include <array>

using namespace std;

int main() {
  int my_array[5]{1, 2, 3, 4};
  int my_array_2[5]{1, 2, 3, 4};

  array<int, 5> array_class_1 {1, 2, 3, 4};
  array<int, 5> array_class_2 {4, 1, 2, 3};

  cout << array_class_1.at(10) << endl;

  string result = my_array == my_array_2 ? "The arrays are equal"
                                         : "The arrays are not equal";

  cout << result << endl;

  result = array_class_1 == array_class_2 ? "The arrays are equal"
                                         : "The arrays are not equal";

  cout << result << endl;

  return 0;
}