class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ans = s+s;
        ans = ans.substr(1,ans.size()-2);
        return ans.find(s)!=string::npos;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)