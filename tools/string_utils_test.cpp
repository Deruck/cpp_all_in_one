#include "string_utils.h"

int main() {
    const std::vector<int> case1 = {1, 3, 10, 2, 5};
    const std::string res1 = deruck::JoinToStr(case1.cbegin(), case1.cend(), ", ");
    const auto res2 = deruck::SplitStr(res1, ", ");
    std::cout << res2.size() << "\n";
    std::cout << deruck::JoinToStr(res2.cbegin(), res2.cend(), ", ") << "\n";
}