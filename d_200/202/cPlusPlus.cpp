#include<iostream>
#include "binaryTree.h"


bool identical(node* root1, node* root2) {
    int val = 0;
    if ((root1 == NULL) && (root2 == NULL)) return 0;
    if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {
        return 1;
    }

    val = identical(root1->left, root2->left);
    val += identical(root1->right, root2->right);
    if (root1->data == root2->data) {
        val += 0;
    } else {
        val += 1;
    }
    return val;
}


void checkIdentical(node* root1, node* root2) {
    int val;
    val = identical(root1, root2);
    if (val == 0) {
        std::cout << "\nIdentical..\n";
    } else {
        std::cout << "\nNot identical...\n";
    }
}

int main() {
    node* root1 = sampleTree();
    node* root2 = sampleTree();

    checkIdentical(root1, root2);
    insertNode(root2, 1234);
    checkIdentical(root1, root2);
    insertNode(root1, 1234);
    checkIdentical(root1, root2);
}