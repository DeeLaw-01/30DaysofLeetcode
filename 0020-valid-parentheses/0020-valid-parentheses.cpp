#include<stack>
class Solution {
public:
    bool isValid(string s) {
        if(s.length() %2 !=0){
            return false;
        }
        stack <char> st;
        for(char c: s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
                continue;
            }
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if( c == ')' && top == '(' || c == ']' && top == '[' || c == '}' && top == '{'){
                st.pop();
                continue;
            }
            return false;
        }
        return st.empty();
    }
};