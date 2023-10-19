struct TreeNode {
public:
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    int val = 0;

public:
    TreeNode() = default;
    TreeNode(int val): val(val) {}
    TreeNode(int val, TreeNode *left, TreeNode *right)
        : val(val), left(left), right(right) {}
};