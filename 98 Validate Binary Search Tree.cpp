//class Solution
//{
//public:
//    bool isValidBST(TreeNode* root)
//    {
//        TreeNode* prev = NULL;
//        return validate(root, prev);
//    }
//    bool validate(TreeNode* node, TreeNode* &prev)
//    {
//        if (node == NULL) return true;
//        if (!validate(node->left, prev)) return false;
//        if (prev != NULL && prev->val >= node->val) return false;
//        prev = node;
//        return validate(node->right, prev);
//    }
//};

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<INT_MAX<<endl;
    cout<<(1LL<<31)-1<<endl;
}
