#include <iostream>

using namespace std;

struct binarytree {
    int data;
    struct binarytree* left = NULL;
    struct binarytree* right = NULL;
}

void insertbt(struct binarytree** root) {
    if(*root==NULL) {
        *root->data=9;
        return;
    }
    if((*root)->left==NULL && (*root)->right==NULL) {
        struct binarytree* node = (struct binarytree*) malloc(sizeof(struct binarytree));
        *root->left=node;
        node->left=10;
    }
}

int main() {
    struct binarytree* root = (struct binarytree*) malloc(sizeof(struct binarytree));
    insertbt(&root);
}
