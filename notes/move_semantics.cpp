#include <iostream>

#pragma optimize( "", off )

class Moveable {
public:
    Moveable() {
        std::cout << "default construct\n";
    }

    Moveable(const Moveable& other) {
        std::cout << "copy construct\n";
    }

    Moveable& operator=(const Moveable& other) {
        std::cout << "copy assign\n";
    }

    Moveable(const Moveable&& other) {
        std::cout << "move construct\n";
    }

    Moveable& operator=(const Moveable&& other) {
        std::cout << "move assign\n";
    }
};

void test() {
    Moveable moveable1;  // default
    std::cout << "Moveable moveable2 = moveable1;  -> ";
    Moveable moveable2 = moveable1; // copy
    std::cout << "Moveable moveable3(moveable1);  -> ";
    Moveable moveable3(moveable1);  // copy
    std::cout << "Moveable moveable4 = std::move(moveable1);  -> ";
    Moveable moveable4 = std::move(moveable1);  // move
    std::cout << "Moveable moveable5(std::move(moveable1));  -> ";
    Moveable moveable5(std::move(moveable1));  // move
    std::cout << "Moveable moveable6 = Moveable();  -> ";
    Moveable moveable6 = Moveable();  // move
    std::cout << "Moveable moveable7(Moveable());  -> ";
    Moveable moveable7{Moveable()};  // move
}

int main() {
    test();
}