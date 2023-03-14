#include <iostream>

void printOutString(std::string);

int main() {
  std::string hello_world = "Hello, World!";
  printOutString(hello_world);
  return 0;
}

void printOutString(std::string str) {
  std::cout << str << std::endl;
}