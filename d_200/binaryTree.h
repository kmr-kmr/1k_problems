

struct node {
    int data;
    node *left, *right;
};

node * newNode(int);
int heightWithoutRecursion(node*);
int height(node*);
void levelOrder(node*);
void inOrder(node*);
void inOrderWithoutRecursion(node*);
void preOrder(node*);
void preOrderWithoutRecursion(node*);
void postOrder(node*);
void postOrderWithoutRecursion(node*);
node* sampleTree();
