#include <bits/stdc++.h>
#include "binaryTree.h"

using namespace std;


void insertNode(node* temp, int key) {
    /* Inserting in level order */
    if (temp == NULL) return;

    queue<node*> q;
    q.push(temp);

    node* curr;
    while(!q.empty()) {
        curr = q.front();
        q.pop();

        if (!curr->left) {
            curr->left = newNode(key);
            break;
        } else {
            q.push(curr->left);
        }
        if (!curr->right) {
            curr->right = newNode(key);
            break;
        } else {
            q.push(curr->right);
        }
    }
}

void deleteDeepestNode(node* root, node* deepest) {
    node* temp;
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->left == deepest) {
            temp->left = NULL;
            delete(deepest);
            break;
        } else {
            q.push(temp->left);
        }

        if (temp->right == deepest) {
            temp->right = NULL;
            delete(deepest);
            break;
        } else {
            q.push(temp->right);
        }

    }
}

void deleteNode(node* root, int key) {
    /* Delete a node in level order */
    node* temp;
    node* nodeTobeDeleted;
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
         temp = q.front();
         q.pop();

        if (temp->data == key) nodeTobeDeleted = temp;
        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }

    int x = temp->data;
    deleteDeepestNode(root, temp);
    nodeTobeDeleted->data = x;

}

int main() {
    node* root = sampleTree();

    // Traverse
    levelOrder(root);
    // Height of the B-tree
    int btreeHeight = heightWithoutRecursion(root);
    std::cout<< "\nHeight of the tree is " << btreeHeight << "\n";

    insertNode(root, 200);
    insertNode(root, 300);
    insertNode(root, 400);
    levelOrder(root);

    std::cout << "Deleteing a node\n";
    deleteNode(root, 200);
    levelOrder(root);

    std::cout << "\n inOrder:\n";
    inOrder(root);
    std::cout << "\n inOrder without recursion:\n";
    inOrderWithoutRecursion(root);
    std::cout << "\n preOrder:\n";
    preOrder(root);
    std::cout << "\n preOrder without recursion:\n";
    preOrderWithoutRecursion(root);
    std::cout << "\n postOrder:\n";
    postOrder(root);
    std::cout << "\n postOrder without recursion:\n";
    postOrderWithoutRecursion(root);
}