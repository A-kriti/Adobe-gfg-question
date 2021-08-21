// Tree implementation

#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  
  Node(int data){
      this->data=data;
      left=right=NULL;
  }
  
};

void print_pre(Node* node){
    if (node==NULL)
    return;
    
   
    cout<<node->data<<" ";
    print_pre(node->left);
    print_pre(node->right);
}

void print_in(Node* node){
    if (node==NULL)
    return;
    
   
  
    print_in(node->left);
      cout<<node->data<<" ";
    print_in(node->right);
}

void print_post(Node* node){
    if (node==NULL)
    return;
    
    
    print_post(node->left);
    print_post(node->right);
      cout<<node->data<<" ";
}


int main(){
    
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left =new Node(6);
    root->right->right=new Node(7);
    
     cout<<"\n Pre \n";
    print_pre(root);
    
     cout<<"\n In Order\n";
    print_in(root);
    
    cout<<"\n Post\n";
    print_post(root);
    
    return 0;
}
