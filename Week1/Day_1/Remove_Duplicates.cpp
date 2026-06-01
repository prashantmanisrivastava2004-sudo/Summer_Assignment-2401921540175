class Solution {
public:
    int removeDuplicates(vector<int> &nums){
        
        //set count to 1 as initially we have set the pointer to the very first element.
        int count=1;

        // return 0 if the array is empty
        if(nums.size()==0) return 0;

        //traverse the array and check whether the previous element is same.
            for(int i=1 ; i<nums.size() ; i++){

        //if the previous element is not same then put the element in the array at the next position.
               if(nums[i] != nums[i-1]){
                nums[count]=nums[i];

        //after putting the element update the count variable to show that one element is added to the array.
                count++;
               }
            }

        //at last return the number of the element present in the array and these are the duplicates in the array
        return count;
    }
};