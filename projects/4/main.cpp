#include <vector>
#include <queue>


class Buffer {
public:
    void Init(int size): size_(size) {
        buffer_.reserve(size_);
    }

    void Push(const std::vector<int> &data);

    bool Pop(std::vector<int> &out_data);

private:
    int size_;
    std::queue<std::vector<int>> buffer_que_;
    std::vector<int> buffer_;
};

void Buffer::Push(const std::vector<int> &data) {
    int head_size = size_ - buffer_.size();
    if (data.size() < head_size) {
        memcpy(data.data(), buffer_.data() + buffer_.size(), data.size() * sizeof(int));
        return;
    }
    memcpy(data.data(), buffer_data() + buffer_.size(), head_size * sizeof(int));
    buffer_que_.push(std::move(buffer_));

}



// n 级阶梯，1走到n，每次走1 到 2 步，共多少走法

int numSteps(int n) {
    int steps[n];
    steps[0] = 1;
    steps[1] = 1;
    for (int i = 2; i < n + 1; ++i) {
        steps[i] = steps[i - 1] + steps[i - 2];
    }
    return steps[n];
}