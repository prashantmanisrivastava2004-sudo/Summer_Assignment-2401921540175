class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0 , left =0 , right = height.size()-1;
        int maxarea = INT_MIN;
        while(left<right){

            //find the area of the container.
            area = min(height[left], height[right])*(right-left);

            //maximise the area of container.
            maxarea= max(area,maxarea);

            //using two pointers approach to move the pointers for maximising the area.
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
     return maxarea;
    }
};

//Time Complexity:O(n)
//space Complexity: O(1)