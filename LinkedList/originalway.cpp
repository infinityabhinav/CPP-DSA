//original way to declare and use linkedlist
#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    while(temp !=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
}

int count(Node* head){
    int n=0;
    Node *temp=head;
    while(temp!=nullptr){
        n++;
        temp=temp->next;
    }
    return n;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    //runtime pe banana badhiya practice h 
    // ease of syntax bhi padta h aage 
    // poimter ka jhamela hat jaega
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    cout<<endl<<"The total nodes are "<<count(a);


    return 0;
}