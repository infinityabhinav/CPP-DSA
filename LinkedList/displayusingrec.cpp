#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=nullptr;

    }
};

void displayUsingRec(Node* head){
    if(head==nullptr) return;
    Node* temp=head;
    cout<<temp->val<<" ";
    displayUsingRec(temp->next);
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    displayUsingRec(a);

    return 0;
}