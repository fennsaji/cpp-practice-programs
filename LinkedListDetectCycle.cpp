#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

bool has_cycle(Node* head) {
    auto* ptr=head;
    vector<struct Node*> prev;
    while(ptr!=NULL){
        prev.push_back(ptr);
        ptr=ptr->next;
        if(find(prev.begin(), prev.end(), ptr)!=prev.end())
            return 1;
    }
    return 0;
}
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

int main(){
    struct Node head;
    auto* ptr=&head;
    // int n,data;
    // cin>>n;
    
    // while(n--){

    // }
/*  ptr=head.next;
    while(ptr!=null){
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }*/
}