class MyStack {
    deque<int> qu;

public:
    MyStack() {}

    void push(int x) { qu.push_back(x); }

    int pop() {
        int val = qu.back();
        qu.pop_back();
        return val;
    }

    int top() { return qu.back(); }

    bool empty() { return qu.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */