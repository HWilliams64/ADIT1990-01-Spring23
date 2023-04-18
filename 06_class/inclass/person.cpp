// Person.cpp
#include "person.hpp"

#include <iostream>
#include <string>

Person::Person(const std::string& name, int age) : name_(name), age_(age) {}

std::string Person::getName() const { return name_; }

int Person::getAge() const { return age_; }

void Person::setName(const std::string& name) { name_ = name; }

void Person::setAge(int age) { age_ = age; }

void Person::celebrateBirthday() {
  ++age_;
  // Output some celebration message to the console
  std::cout << "Happy Birthday, " << name_ << "! You are now " << age_
            << " years old.\n";
}