// Person.h

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  Person(const std::string& name, int age);
  std::string getName() const;
  int getAge() const;
  void setName(const std::string& name);
  void setAge(int age);

 private:
  std::string name_;
  int age_;
  void celebrateBirthday();
};

#endif  // PERSON_H