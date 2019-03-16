

struct node {
    int data;
    node *left, *right;
};

node * newNode(int val);
int heightWithoutRecursion(node* givenNode);
int height(node* givenNode);
void levelOrder(node* root);
node* sampleTree();