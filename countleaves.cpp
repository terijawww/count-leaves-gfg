#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
}; 

struct node* newNode(int val){
    struct node* n = new node();
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
unsigned int getleafcount(struct node* node){
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return getleafcount(node->left) + getleafcount(node->right);
}

int main(){
    struct node* root = newNode(1);                                         
    root->left = newNode(10);
    root->right = newNode(39);
    root->left->left = newNode(5);

    cout << "jumlah leaf: " << getleafcount(root) << endl;

    return 0;
}