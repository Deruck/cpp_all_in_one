#include <string>
#include <iostream>


int getIntValue() {
    return 1;
}

std::string getStringValue() {
    return "abc";
}

template <typename T>
T getValue();

template <>
int getValue<int>() {
    return getIntValue();
}

template <>
std::string getValue<std::string>() {
    return getStringValue();
}

template <typename T>
void getValue_(T* value);

template <>
void getValue_<double>(double* value) {
    *value = getIntValue();
}

template <>
void getValue_<std::string>(std::string* value) {
    *value =  getStringValue();
}

template <>
void getValue_<int64_t>(int64_t* value) {
    *value =  getIntValue();
}


int main() {
    std::cout << getValue<int>() << "\n";
    std::cout << getValue<std::string>() << "\n";
    int a = getValue<decltype(a)>();
    std::cout << a << "\n";
    // long a;
    // getValue_(&a);
    // SET_AD_FIELD(table, key, base.asdasda)
}
