#include <iostream>
#include <string>

int main() {
  std::cout << std::stoi("10") - 1 << "\n";
  std::cout << std::stol("10") - 1 << "\n";
  std::cout << std::stof("9.9") - 0.1 << "\n";
}