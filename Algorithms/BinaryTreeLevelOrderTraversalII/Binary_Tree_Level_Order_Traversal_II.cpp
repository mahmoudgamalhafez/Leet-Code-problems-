/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
 */

#include <iostream>
#include <vector>
#include <queue> 

/**
 * Definition for a binary tree node.
 * */
using namespace std; 

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
vector<vector<int>> levelOrderBottom(TreeNode* root) 
{
    vector<vector<int>> Arr ;
    vector<int> m;
    TreeNode * current;
    int n;
    queue<TreeNode*> queue_;  
    if(root==nullptr )
    {   
        return Arr;
    }
    queue_.push(root);
    while(!queue_.empty())
    {
        n=queue_.size();
        for(int i=0;i<n;i++)
        {
            current=queue_.front();
            queue_.pop();
            m.push_back(current->val);
            if(current->left!=nullptr)
                queue_.push(current->left);
            if(current->right!=nullptr)
                queue_.push(current->right);
        }
        Arr.push_back(m);
        m.clear();

    }
    reverse(Arr.begin(),Arr.end());
    return Arr;
}

