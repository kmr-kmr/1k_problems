#include <bits/stdc++.h>
#include "../binaryTree.h"

// using namespace std;


// struct node {
//     int data;
//     node *left, *right;
// };

// node* newNode(int data) {
//     struct node * temp= (struct node*)malloc(sizeof(struct node));

//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

// void preOrder(node *root) {
//     int a;
// }

// int heightWithoutRecursion(node* givenNode) {

//     if(givenNode == NULL) return 0;

//     int height = 0;
//     node* curr;    
//     queue<node*> q;
//     q.push(givenNode);
//     q.push(NULL);
//     height += 1;

//     while (q.size() > 1) {
//         curr = q.front();
//         q.pop();

//         if(curr == NULL) {
//             q.push(NULL);
//             height += 1;
//         } else {
//             if (curr->left) q.push(curr->left);
//             if (curr->right) q.push(curr->right);
//         }
//     }
//     return height;
// }

// int height(node* node) {
//     if (node == NULL) {
//         return 0;
//     } else {
//         int lheight = height(node->left);
//         int rheight = height(node->right);

//         if (lheight > rheight) {
//             return lheight + 1;
//         } else {
//             return rheight + 1;
//         }

//     }
// }


// void levelOrder(node* root) {
//     if(root == NULL) return;

//     node* curr;
//     queue<node*> q;

//     q.push(root);
//     q.push(NULL);

//     while (q.size() > 1) {
//         curr = q.front();
//         q.pop();

//         if (curr == NULL){
//             q.push(NULL);
//             cout << "\n";
//         } else {
//             if (curr->left) q.push(curr->left);
//             if (curr->right) q.push(curr->right);
//             cout << curr->data << " ";
//         }
//     }
// }


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