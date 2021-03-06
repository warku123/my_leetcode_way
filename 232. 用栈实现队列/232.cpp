class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

    void in2out()
    {
        int tmp;
        while(!s1.empty())
        {
            tmp = s1.top();
            s1.pop();
            s2.push(tmp);
        }
    }
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int tmp;
        if(s2.empty())
            in2out();
        tmp = s2.top();
        s2.pop();
        return tmp;
            
    }
    
    /** Get the front element. */
    int peek() {
        if(s2.empty())
            in2out();
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty()&&s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */