class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;

        //make the window of k elements and calculate the sum of the window
        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        //assume that the sum of the window initially is the maximum sum.
         int maxsum= sum;

         //now slide the window for getting the sum of next window add the ith element and remove the i-kth element from the window.
        for(int i=k ; i<nums.size(); i++){
            sum += nums[i];
            sum -= nums[i-k];

        //calculate the maximum sum of the window
            maxsum = max(maxsum,sum);
        }

        //return the average of it.
        return (double)maxsum/k;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)