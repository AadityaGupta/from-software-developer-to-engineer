class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> minimumElementForStackSize;

    MinStack() {
    }

    void push(int x) {
        if (!stack.size()) {
            minimumElementForStackSize.push_back(x);
        } else {
            int currentMin = minimumElementForStackSize.back();
            minimumElementForStackSize.push_back(min(currentMin, x));
        }

        stack.push_back(x);
    }

    void pop() {
        if (!stack.size()) {
            return;
        }

        stack.pop_back();
        minimumElementForStackSize.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return minimumElementForStackSize.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
