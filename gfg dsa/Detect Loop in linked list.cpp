// ques - https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

//Using Floyd’s Cycle-Finding Algorithm 


#include <bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    
    
};

void push(Node** head_ref,int new_data){
    
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=*head_ref;
    *head_ref=new_node;
    
}

/*void print(Node*head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}*/

int detect_loop(Node*head){
    
    
    Node* slow=head;
    Node* fast=head;
    
    while(slow&&fast&&fast->next){
        
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast){
            return 1;
        }
        
    }
    
    return 0;
}

int main()
{
    Node* head=NULL;
    /*
    for(int i=0;i<5;i++){
        push(&head,i);
    }*/
    
    
    // ex - 1->2->3->4->5->2;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    
    head->next->next->next->next=head->next;
    //print(head);
    cout<<"\n";
    
    if(detect_loop(head)==1){
        cout<<"True"<<endl;
    }
    
    else{
        cout<<"False";
    }
    
    return 0;
    
}

/*Time complexity: O(n). 
Only one traversal of the loop is needed.
Auxiliary Space:O(1). 
There is no space required.*/
