#include <iostream>

[[nodiscard]] bool func(int x) {
    if (x > 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    func(2);  // 未捕获返回值时编译warning
    if (func(2)) {
        std::cout << "hello world\n";
    }
}