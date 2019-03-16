#include <bits/stdc++.h>
#include "binaryTree.h"


int main() {
    node* root = newNode(10);
    root->left = newNode(9);
    root->right = newNode(11);
    root->right->left = newNode(6);
    root->right->right = newNode(12);
    root->left->right = newNode(3);
    root->left->left = newNode(34);
    root->left->left->right = newNode(44);
    root->left->left->right->left = newNode(444);

    levelOrder(root);

    int btreeHeight = heightWithoutRecursion(root);
    std::cout<< "\nHeight of the tree is " << btreeHeight << "\n";
}