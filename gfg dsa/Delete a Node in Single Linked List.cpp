// ques - https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1#

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* start = new Node(x);
    start->next=head;
    Node* p=start;
    
    int i=1;
    
    while(i<x){
        p=p->next;
        i++;
    }
    
    Node* t=p->next;
    p->next=p->next->next;
    
    delete(t);
    
    return start->next;
    
    
}
