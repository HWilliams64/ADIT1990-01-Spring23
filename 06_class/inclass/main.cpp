#include "person.hpp"
#include <iostream>

int main() {
  Person p = Person("Sponge Bob", 31);

  std::cout << "Name: " << p.getName() << std::endl;
  return 0;
}