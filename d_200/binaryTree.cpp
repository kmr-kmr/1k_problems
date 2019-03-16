#include <bits/stdc++.h> 
#include "binaryTree.h"
using namespace std;


node* newNode(int data) {
    struct node * temp= (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


int heightWithoutRecursion(node* givenNode) {

    if(givenNode == NULL) return 0;

    int height = 0;
    node* curr;    
    queue<node*> q;
    q.push(givenNode);
    q.push(NULL);
    height += 1;

    while (q.size() > 1) {
        curr = q.front();
        q.pop();

        if(curr == NULL) {
            q.push(NULL);
            height += 1;
        } else {
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
    return height;
}

int height(node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight) {
            return lheight + 1;
        } else {
            return rheight + 1;
        }

    }
}

void levelOrder(node* root) {
    if(root == NULL) return;

    node* curr;
    queue<node*> q;

    q.push(root);
    q.push(NULL);

   cout<< "\nLevelorder of a tree:\n";  
    while (q.size() > 1) {
        curr = q.front();
        q.pop();

        if (curr == NULL){
            q.push(NULL);
            cout << "\n";
        } else {
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
            cout << curr->data << " ";
        }
    }
    cout << "\n";
}

void inOrder(node* givenNode) {
    if (givenNode == NULL) return;
    inOrder(givenNode->left);
    cout<< givenNode->data << " ";
    inOrder(givenNode->right);
}

void inOrderWithoutRecursion(node* givenNode) {
    if (givenNode == NULL) return;

    node* curr;
    stack<node*> s;
    curr = givenNode;

    while (curr != NULL || s.empty() == false) {

        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";
        curr = curr->right;
    }

}

void preOrderWithoutRecursion(node* givenNode) {
    if (givenNode == NULL) return;

    node* curr;
    stack<node*> s;
    curr = givenNode;

    while (curr != NULL || s.empty() == false) {
        while (curr != NULL) {
            cout << curr->data << " ";
            s.push(curr->right);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
    }
}


void preOrder(node* givenNode) {
    if (givenNode == NULL) return;
    cout << givenNode->data << " ";;
    preOrder(givenNode->left);
    preOrder(givenNode->right);
}

void postOrderWithoutRecursion(node* givenNode) {
    if (givenNode == NULL) return;

    node* curr;
    stack<node*> s;
    curr = givenNode;

    while (curr != NULL || s.empty() != false) {

        while (curr != NULL) {
            s.push(curr);
            if (curr->right) s.push(curr->right);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();

        node* temp = s.top();
        if (curr->right != NULL && curr->right == temp) {
            s.pop();
            s.push(curr);
            curr = curr->right;
        } else {
            cout << curr->data << " ";
            curr = NULL;
        }
    }
}

void postOrder(node* givenNode) {
    if (givenNode == NULL) return;
    postOrder(givenNode->left);
    postOrder(givenNode->right);
    cout << givenNode->data << " ";
}


node* sampleTree() {
    node* root = newNode(10);
    root->left = newNode(9);
    root->right = newNode(11);
    root->right->left = newNode(6);
    root->right->right = newNode(12);
    root->left->right = newNode(3);
    root->left->left = newNode(34);
    root->left->left->right = newNode(44);
    root->left->left->right->left = newNode(444);

    return root;
}
