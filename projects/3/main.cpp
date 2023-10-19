#include <vector>
#include <unordered_map>

std::vector<int> findDup(const std::vector<int>& nums) {
    std::unordered_map<int, int> count_mp;
    std::vector<int> res;
    for (const auto &n : nums)
    {
        auto iter = count_mp.find(n);
        if (iter == count_mp.end()) {
            count_mp.insert(n, 0);
        }
        else if (iter->second == 1) {
            res.push_back(n);
        }
        count_mp[n]++;
    }
    return res;
}


// k v 数据库
// string : string
// 设计对外接口

#include <string>
#include <map>

enum class RetState
{
    NOT_EXIST = 0
};

class KVDataBase {
public:
    RetState Set(const std::string &key, const std::string &value);
    RetState Get(const std::string &key, std::string &value);
    RetState Remove(const std::string &key);
    RetState List(const std::string &key, int size, std::vector<std::pair<std::string, std::string>> &list);

private:
    std::map<std::string, std::string> data_;
};

RetState KVDataBase::List(const std::string &key, int size, std::vector<std::pair<std::string, std::string>> &list) {
    std::vector<std::pair<std::string, std::string>> list;
    auto start = data_.find(key);
    if (start == data_.end()) {
        return RetState::NOT_EXIST;
    }
    
}
