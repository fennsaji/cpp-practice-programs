#include <iostream>
#include <vector>

using namespace std;

struct binarytree {
    int data;
    struct binarytree* left = NULL;
    struct binarytree* right = NULL;
};

binarytree* insertbt(vector<int> arr,int index,int t){
    binarytree *tmp = new binarytree();
    tmp->left=NULL;
    tmp->right=NULL;
    // struct binarytree* tmp ;
    if(index < t) {
        tmp->data = arr[index];
        tmp->left = insertbt(arr, 2*index + 1, t);
        tmp->right = insertbt(arr, 2*index + 2, t);
    }
    return tmp;
}

void printbt(vector<int>* arrp,struct binarytree* node,int index, int t) {
    if(index < t) {
        (*arrp).at(index)=node->data;
        printbt(arrp,node->left, 2*index + 1, t);
        printbt(arrp,node->right, 2*index + 2, t);
    }
    return;
}

int heightbt(struct binarytree* node) {
    int height=-1;
    if(node!=NULL) {
        return height = 1 + max(heightbt(node->left),heightbt(node->right));
    }
    return height;
}

int main() {
    struct binarytree* root;
    vector<int> arr;
    int tmp,t;
    cin >> t;  
    vector<int> arrp(t);
    for(int i=0;i<t;i++) {
        cin>>tmp;
        arr.push_back(tmp);
    }
    root = insertbt(arr,0,t);
    printbt(&arrp,root,0,t);
    for(int i=0;i<t;i++) {
        cout<<arrp[i];
    }
    int height= heightbt(root);
    cout<<"\n"<<height;
}
