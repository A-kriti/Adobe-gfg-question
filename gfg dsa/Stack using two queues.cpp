// ques - https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        
        
        q1.push(x);
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
            
        }
        swap(q1,q2);
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        int ans;
        if(!q2.empty()){
            ans= q2.front();
            q2.pop();
        }
        else{
            ans= -1;
        }
        return ans;
        
}
