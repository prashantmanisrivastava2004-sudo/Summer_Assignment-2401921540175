class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0, right= nums.size()-1;
        int add = nums.size()-1;

        //Taken Extra space to store the square array.
        vector<int>ans(nums.size());
        
        while(left<=right){

        //Compare the absolute value of the elements and move the pointers accordingly.
            if(abs(nums[left])<abs(nums[right])){
            ans[add] = nums[right]*nums[right];
               right--;
            } else{
                ans[add]= nums[left]*nums[left];
                left++;
            }
            add--;
        }
        return ans;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)