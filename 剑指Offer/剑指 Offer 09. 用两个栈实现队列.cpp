class CQueue {
public:
    stack<int> st1, st2;

    CQueue() {
    }

    void appendTail(int value) {
        st1.push(value);
    }

    int deleteHead() {
        if (st1.empty()) return -1;
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int head = st2.top();
        st2.pop();
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return head;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */