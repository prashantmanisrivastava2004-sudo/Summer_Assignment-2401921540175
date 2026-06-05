class Solution {
    private:
       bool isvalid(char ch){
        if((ch>='a'&& ch<='z')|| (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9')){
            return 1;
        }else{
            return 0;
        }
       }

       char tolowercase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        } else{
            int temp = ch-'A'+'a';
            return temp;
        }
       }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int j=0; j<s.length(); j++){
            if(isvalid(s[j])){
                temp.push_back(s[j]);
            }
        }
        int left =0;
        int right = temp.length()-1;
        while(left<=right){
            if(tolowercase(temp[left]) != tolowercase(temp[right])){
                return 0;
            } else{
                left++;
                right--;
            }
        }
        return 1;
    }
};

//Time Complexity:O(n)
//Space Complexity:O(n)