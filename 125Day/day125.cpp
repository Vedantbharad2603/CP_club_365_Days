// 0x125Day of 0x365Days challenge
// VEDANT BHARAD
// 17-2-2023
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) {
        return vector<vector<int> > ();
    }
    vector<vector<int>> toReturn;
    queue<TreeNode*> tempQueue;
    tempQueue.push(root);
    bool ltr = true;
    while ( !tempQueue.empty()) {
        int size = tempQueue.size();
        vector<int> row(size);
        for (int loop = 0; loop < size; loop++) {
            TreeNode* node = tempQueue.front();
            tempQueue.pop();
            int index = (ltr) ? loop : (size - 1 - loop);
            row[index] = node->val;
            if (node->left) {
                tempQueue.push(node->left);
            }
            if (node->right) {
                tempQueue.push(node->right);
            }
        }
        ltr = !ltr;
        toReturn.push_back(row);
    }
    return toReturn;
    }
};