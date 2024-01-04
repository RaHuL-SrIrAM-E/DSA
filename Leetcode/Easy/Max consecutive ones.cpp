// Given a binary array nums, return the maximum number of consecutive 1's in the array.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0;
        int count=0;
        for(int i:nums){
            if(i==1) count++;
            else if(i==0) {
                if(maxCount<count) maxCount=count;
                count=0;
            }
        }
        if(maxCount<count) maxCount=count;
        return maxCount;
    }
};
