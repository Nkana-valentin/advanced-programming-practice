#include <iostream>

#include <string>

int main() //exercises1.cpp:6:1: error: expected unqualified-id before '{' token { using the compiler c++

{
  std::cout << "Insert your name and age:\n";
  std::string name;
  unsigned int age;
  std::cin >> name >> age;
  std::cout << "Hello, " << name << " [" << age << "]\n";
  return 0;
}