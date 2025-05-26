//
// Created by Agnivesh Kaundinya on 5/26/2025.
//

#include "BinarySearchTree.h"
#include <iostream>
#include <queue>
using namespace std;


TreeNode* search(TreeNode* root, int key) {
    if (root == nullptr || root->val == key) {
        return root;
    }

    if (key < root->val) {
        return search(root->left, key);
    }

    else if (key > root->val) {
        return search(root->right, key);
    }
}

TreeNode* insert(TreeNode* root, int key) {
    if (root == nullptr) {
        return new TreeNode(key);
    }

    if (key < root->val) {
        root->left = insert(root->left, key);
    }

    else if (key > root->val) {
        root->right = insert(root->right, key);
    }

    return root;
}

/* Deletion pseudocode
if the root is null
    The item is not in the tree - return null
Compare the item to the data at the local root
if the item is less than the data at the local root
    return the result of deleting from the left subtree
else if the item is greater than the data at the local root
    return the result of deleting from the right subtree
else (the item is the local root)
    store the data in the local root in deletedReturn.
    if the local root has no children
        set the parent of the local root to reference null
    else if the local root has one child
        set the parents of the local root to reference that child
    else (find the inorder predecessor)
        if the left child has no right child it is in the inorder predecessor
            Set the parent of the local root to reference the left child.
        else
            Find the rightmost node in the right subtree of the left child
            Copy its data into the local nodes' data and remove it by setting its parent to reference its left child.
*/

void inorder(TreeNode* root) {
    if (root == nullptr) {
        cout << "";
    }
    else {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

void sumOfRightLeaves(TreeNode* root) {
    queue<TreeNode*> q;
    int sum = 0;

    if (root != NULL)
        q.push(root);
    while (!q.empty()) {
        if (q.front()->right != NULL && q.front()->right-> right == NULL && q.front()->right->left == NULL) {
            sum += q.front()->right->val;
        }
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        q.pop();
    }
    cout << sum;
}


