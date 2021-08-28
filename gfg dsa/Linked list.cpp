
#include<bits/stdc++.h>

using namespace std;



class Node{
    public:
    int data;
    Node* next;
};

void push(Node**head_ref,int new_data){
    
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
    
}

void print(Node* n){
    
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
    
    
}

void findmid(Node* head){
    
    int count=0;
    Node* mid=head;
    
    while(head!=NULL){
        
        if(count&1){
            mid=mid->next;
        }
        count++;
        head=head->next;
        
    }
    
    if(mid!=NULL){
        cout<<mid->data;
    }
}


void findlast(Node* head){
    
    int count=0;
    Node* last=head;
    
    
    while(head!=NULL){
        
        count++;
        head=head->next;
        
    }
    
    while(count-1){
        
        count--;
        last=last->next;
        
    }
    
    
    cout<<last->data;
    
}


int main(){
    
    Node* head=NULL;
    
    for(int i=1;i<16;i++){
        push(&head,i*2+3);
    }
    
    cout<<"linked list -> ";print(head);
    cout<<"\n";
    cout<<"linked list first element -> "<<head->data;
    cout<<"\n";
    cout<<"linked list middle element -> ";findmid(head);
    cout<<"\n";
    cout<<"linked list last element -> ";findlast(head);
    
    return 0;
}
