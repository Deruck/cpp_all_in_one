#include <string>
#include <vector>
#include <sstream>
#include <iostream>

namespace deruck {

template <typename InputIter, typename SplitType>
std::string JoinToStr(const InputIter& begin, const InputIter& end, const SplitType& split) {
    std::ostringstream oss;
    InputIter iter = begin;
    if (iter != end)
    {
        oss << *iter++;
    }
    while (iter != end) {
        oss << split << *iter++;
    }
    return oss.str();
}

std::vector<std::string> SplitStr(const std::string& str, const std::string& split) 
{
    std::vector<std::string> result;
    size_t start = 0;
    size_t end = str.find(split);
    while (end != std::string::npos) {
        result.push_back(str.substr(start, end - start));
        start = end + split.size();
        end = str.find(split, start);
    }
    result.push_back(str.substr(start));
    return result;
}

} // namespace deruck
