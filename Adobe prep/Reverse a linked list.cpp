// ques - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

struct Node* reverseList(struct Node *head)
    {
       
       struct Node*prev=NULL;
       struct Node*curr=head;
       struct Node*next=NULL;
       
       while(curr!=NULL){
           
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       
       return prev;
       
}
