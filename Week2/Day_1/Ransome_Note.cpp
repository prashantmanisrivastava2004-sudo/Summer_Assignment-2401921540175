class Solution {
public:
    bool canConstruct(string r, string m) {
        int freq[26] = {0};
        for (int i = 0; i < m.size(); i++) {
            freq[m[i] - 'a']++;
        }

        for (int i = 0; i < r.size(); i++) {
            freq[r[i] - 'a']--;

            if (freq[r[i] - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
//Time Complexity: O(n+m)
//Space Complexity: O(1)