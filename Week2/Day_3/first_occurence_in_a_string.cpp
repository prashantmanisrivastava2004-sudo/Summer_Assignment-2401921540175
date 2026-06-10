class Solution {
public:
    int strStr(string h, string n) {
         int pos = h.find(n);
        
         return (pos==string::npos)?-1:pos;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)