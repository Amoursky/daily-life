class MyQueue {
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
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int tmp1 = s1.top();
                s1.pop();
                s2.push(tmp1);
            }
        }
        int tmp2 = s2.top();
        s2.pop();
        return tmp2;
    }

    /** Get the front element. */
    int peek() {
        int ret = this->pop();
        s2.push(ret);
        return ret;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty() && s2.empty();
    }
private:
    stack<int> s1;
    stack<int> s2;
};
