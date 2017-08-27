#include <iostream>
#include <vector>

using namespace std;

struct bstree {
    int data;
    struct bstree* left = NULL;
    struct bstree* right = NULL;
};

int main() {
    struct bstree* root = NULL;
    root->data=6;
    // cout<<root->data;
}