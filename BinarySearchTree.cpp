#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node() {}
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        
        void levelOrder(Node *root){
            queue<Node*> q;           
            if (root) {
                q.push(root);
            }
            while (!q.empty()){
                const Node * const temp_node = q.front();
                q.pop();
                cout<<temp_node->data<<"\t";
        
                if (temp_node->left) {
                    q.push(temp_node->left);
                }
                if (temp_node->right) {
                    q.push(temp_node->right);
                }
            }
        }

        void InOrder(Node *root) {
            if(root!=NULL) {
                InOrder(root->left);
                cout<<root->data<<"/t";;
                InOrder(root->right);
            }
            return;
        }

        void PostOrder(Node *root) {
            if(root!=NULL) {
                InOrder(root->left);
                InOrder(root->right);
                cout<<root->data<<"/t";;
            }
            return;
        }

        void PreOrder(Node *root) {
            if(root!=NULL) {
                cout<<root->data<<"/t";
                InOrder(root->left);
                InOrder(root->right);
            }
            return;
        }
    };

    int main(){
        Solution myTree;
        // Node* root = new Node(10);
        // int T,data,tmp;
        // cin>>T;
        // while(T-->0){
        //     cin>>data;
        //     root= myTree.insert(root,data);
        // }

        // myTree.levelOrder(root);
        // bool tr = myTree.checkBST(root);
        // cout<<tr;
        return 0;
    }