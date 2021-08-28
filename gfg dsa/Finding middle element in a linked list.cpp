// ques - https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/


//method 1
int getMiddle(Node *head)
{
   int c=0;
   Node* mid=head;
   
   while(head!=NULL){
       
       // odd & 1 = 1
       // even & 1 = 0
       
       if(c&1){
           mid=mid->next;
           
       }
       c++;
       head=head->next;
   }
        
    if(mid!=NULL){
        return mid->data;
    }
}

//method 2


int getMiddle(Node *head)
{
   int c=0;
   Node* mid=head;
   
   while(head!=NULL){
       
       
       c++;
       head=head->next;
   }
   
   int t=c/2;
   while(t){
       
       
       t--;
       mid=mid->next;
   }
   
   return mid->data;
     
}
