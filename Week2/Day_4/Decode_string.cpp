class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                countStack.push(num);
                stringStack.push(curr);

                num = 0;
                curr = "";
            }
            else if (isalpha(ch)) {
                curr += ch;
            }
            else { 
                int repeat = countStack.top();
                countStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                while (repeat) {
                    prev += curr;
                    repeat--;
                }

                curr = prev;
            }
        }

        return curr;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)