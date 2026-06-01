class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //first of all create a hashmap to store values and indexes.

        unordered_map<int, int>mp;

        for(int i=0; i<nums.size(); i++){

            //check whether the complement exist or not.

            int check = target-nums[i];
            if(mp.find(check) != mp.end()){
                return{mp[check],i};
            }
            mp[nums[i]]=i;
        }

        return{-1,1};
    }
};

//Time Complexity : o(n) 
//Space Complexity : o(n)