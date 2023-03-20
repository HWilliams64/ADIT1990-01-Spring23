#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, int> my_map = {{"one", 1}, {"two", 2}, {"three", 3}};

  // This shows how to get a value in the map using a key
  int v = my_map["one"];
  cout << v << endl;

  // Reassign a value in the map
  my_map["two"] = 22;
  v = my_map["two"];
  cout << v << endl;

  my_map["four"] = 4;
  v = my_map["four"];
  cout << v << endl;

  auto it = my_map.find("one");
  if (it != my_map.end()) {
    cout << it -> second << endl;
    my_map.erase(it);
  }

  for(auto it = my_map.begin(); it != my_map.end(); it++){
    cout << it -> first << ": " << it -> second << endl;
  }

  return 0;
}