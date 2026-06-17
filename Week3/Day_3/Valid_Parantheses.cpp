class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='('||c=='['||c=='{')
            st.push(c);
            else{
                if(st.empty()||abs(st.top()-c)>2)   return false;
                st.pop();
            }
        }
       return st.empty(); 
    }
};

// Time Complexity: O(n) .
// Space Complexity: O(n) .