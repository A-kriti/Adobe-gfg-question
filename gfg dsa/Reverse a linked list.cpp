// ques - https://www.geeksforgeeks.org/reverse-a-linked-list/

struct Node* reverseList(struct Node *head)
    {
        
        
        struct Node* prev=NULL;
        struct Node* cur=head;
        struct Node* next=NULL;
        
        while(cur!=NULL){
            
            next=cur->next;
            cur->next=prev;
            
            prev=cur;
            cur=next;
        }
        
        head=prev;
        
    }
