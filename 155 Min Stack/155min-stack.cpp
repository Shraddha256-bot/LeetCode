class MinStack {
public:

    stack<int> st;
    stack<int> mist;
    
    void push(int val) {
        st.push(val);

        if(mist.empty() || val<=mist.top()){
            mist.push(val);
        }
    }
    
    void pop() {
      if(st.top() == mist.top())  {
          mist.pop();
      }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mist.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */