class MinStack {
public:
    stack<int>st;
    stack<int>minst;
    MinStack() {
        
    }
    
    void push(int value) {
        if((st.empty()&&minst.empty())||minst.empty()){
            st.push(value);
            minst.push(value);
        }
        
        else{
            st.push(value);
            if(value<=minst.top()){
                minst.push(value);
            }
            
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        else if(st.top()==minst.top()){
            
                st.pop();
                minst.pop();
            
        }
        else{
            st.pop();
        }
        
    }
    
    int top() {

        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
