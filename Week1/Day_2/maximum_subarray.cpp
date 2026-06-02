class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsum = INT_MIN;

        //find prefix sum of all indexes.
        for (int value : nums) {
            currsum += value;

        //get the maximum of all the sum.
            maxsum = max(currsum, maxsum);

        //if the prefix sum at any index is less than zero make it to zero(reinitialize) because it will never make the subarray sum maximum.
            if (currsum < 0)
                currsum = 0;
        }
        return maxsum;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)