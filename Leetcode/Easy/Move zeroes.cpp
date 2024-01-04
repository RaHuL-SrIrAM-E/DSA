// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//snowBall approach:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int snowBallSize=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) snowBallSize++;
            else if(snowBallSize>0){
                int temp=nums[i];
                nums[i]=0;
                nums[i-snowBallSize]=temp;
            }
        }
    }
};
