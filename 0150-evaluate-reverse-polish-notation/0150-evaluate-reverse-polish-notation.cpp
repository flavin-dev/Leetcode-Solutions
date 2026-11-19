class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int N=tokens.size(),res=0;
        stack<string>st;
        for(int i=0;i<N;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                
                if(tokens[i]=="+"){
                    int a=stoi(st.top());
                    st.pop();
                    int b=stoi(st.top());
                    st.pop();
                    res=b+a;
                    st.push(to_string(res));
                }
                else if(tokens[i]=="-"){
                    int a=stoi(st.top());
                    st.pop();
                    int b=stoi(st.top());
                    st.pop();
                    res=b-a;
                    st.push(to_string(res));
                    
                }
                else if(tokens[i]=="*"){
                    int a=stoi(st.top());
                    st.pop();
                    int b=stoi(st.top());
                    st.pop();
                    res=b*a;
                    st.push(to_string(res));
                    
                }
                else if(tokens[i]=="/"){
                    int a=stoi(st.top());
                    st.pop();
                    int b=stoi(st.top());
                    st.pop();
                    res=b/a;
                    st.push(to_string(res));
                }
            }
            else{
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};