#include <iostream>

int main() {
  // if (<statement>; <condition>)
  // 可以更好规范变量作用域
  if (bool x = true; x) {
    std::cout << "hello_world!\n";
  }
}