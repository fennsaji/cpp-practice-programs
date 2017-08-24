//This program implements Queue using Linkedlist
#include <iostream>

using namespace std;

struct linkedlist {
    int data;
    struct linkedlist *next = NULL;
};

void insertll(struct linkedlist* head, int data) {
    struct linkedlist node = (struct linkedlist) malloc(sizeof(struct linkedlist));
    node.data=data;
    node.next=head;
    head=node;
}

void deletell(struct linkedlist* head) {
    head=head.next;
}

void printll(struct linkedlist* head) {
    struct linkedlist ptr = (struct linkedlist) malloc(sizeof(struct linkedlist));
    ptr=head;
    while(!(ptr.next==NULL)) {
        cout<<ptr.data<<"\n";
        ptr=ptr.next;
    }
}

int main() {
    int choice,data;
    char ans = 'y';
    struct linkedlist head = (struct linkedlist) malloc(sizeof(struct linkedlist));
    while(ans=='y'||ans=='Y'){
        cin>>choice;
        switch(choice) {
            case 1: cin>>data;
                    insertll(&head,data);
                    break;
            case 2: deletell(&head);
                    break;
            case 3: printll(&head);
                    break;
            default: cout<<"Wrong Command\n";
        }
        cout<<"More?\n";
        cin>>ans;
    }
}