#include <iostream>

int main() {
  std::pair p = {1, "abc"};
  auto [x, y] = p;
  std::cout << "x = " << x << ", y = " << y << "\n";
}