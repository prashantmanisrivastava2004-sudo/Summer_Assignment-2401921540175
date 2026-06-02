class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //create a set of integers and store the value of nums array in it.(set only store unique value)
       unordered_set<int> s(nums.begin(), nums.end());

       //if set size and the array size is equal then it does not contain duplicate value and return false
       return s.size() != nums.size(); 
    }
};

//Time complexity: O(n)
//Space complexity: O(n)