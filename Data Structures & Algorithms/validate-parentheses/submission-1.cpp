class Solution {
public:
    bool isMatch(char close, char open){
        return ((close == ')' && open == '(') || 
                (close == '}' && open == '{') ||
                (close == ']' && open == '['));
    }

    bool isValid(string s) {
        stack<int> st;
        int l = s.length();

        for(int i=0;i<l;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            } else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(st.empty()) return false;
                if(!isMatch(s[i], st.top())) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};
