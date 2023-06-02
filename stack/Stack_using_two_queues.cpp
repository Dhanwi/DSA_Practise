//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


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
// void QueueStack :: push(int x)
// {
//         // Your Code
//         q1.enque(x);
// }

// //Function to pop an element from stack using two queues. 
// int QueueStack :: pop()
// {
//         // Your Code
//         if(q1.isEmpty() && q2.isEmpty()){
//             return -1;
//         }
//         if(q2.isEmpty()){
//             while(!q1.isEmpty()){
//                 int element = q1.getRear();
//                 q1.deque();
//                 q2.enque(element);
//             }
//         }
        
//         int poppedElement = q2.getFront();
//         q2.deque();
//         return poppedElement;
// }

void QueueStack::push(int x)
{
    // Push the element onto q1
    q1.push(x);
}

int QueueStack::pop()
{
    // If q1 is empty, the stack is empty
    if (q1.empty()) {
        return -1;
    }
    
    // Move all elements from q1 to q2 except the last one
    while (q1.size() > 1) {
        int element = q1.front();
        q1.pop();
        q2.push(element);
    }
    
    // Pop the last element from q1 (which is the top of the stack)
    int poppedElement = q1.front();
    q1.pop();
    
    // Swap the names of q1 and q2 to maintain the order of elements
    swap(q1, q2);
    
    return poppedElement;
}

