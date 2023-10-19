#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>

std::vector<int> decomp(int n) {
    int power = 1;
    std::vector<int> res;
    while (n)
    {
        int delta = (n & 1) * power;
        power *= 2;
        if (delta) {
            res.push_back(delta);
        }
        n >>= 1;
    }
    return res;
}



int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> nums;
    int sum = 0;
    bool is_used[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        sum += num;
        nums.push_back(decomp(num));
        is_used[i] = false;
    }
    while (k > 0) {
        int max_val = INT_MIN;
        int max_num_idx = -1;
        int max_pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (is_used[i]) {
                continue;
            }
            int pos = std::min(k, (int) nums[i].size()) - 1;
            if (nums[i][pos] > max_val) {
                max_val = nums[i][pos];
                max_num_idx = i;
                max_pos = pos;
            }
            else if (nums[i][pos] == max_val)
            {
                if (max_pos > pos) {
                    max_val = nums[i][pos];
                    max_num_idx = i;
                    max_pos = pos;
                }
            }
        }
        is_used[max_num_idx] = true;
        for (int i = 0; i < max_pos + 1; i++) {
            sum -= nums[max_num_idx][i];
        }
        k -= (max_pos + 1);
    }
    std::cout << sum;
}