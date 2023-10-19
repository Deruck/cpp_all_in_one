#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    nums.push_back(0);
    while (n--) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    int half = nums.size() / 2;
    int res = 0;
    for (int i = 0; i < half; i++) {
        res += (nums[nums.size() - 1 - i] - nums[i]);
    }
    std::cout << res;
}