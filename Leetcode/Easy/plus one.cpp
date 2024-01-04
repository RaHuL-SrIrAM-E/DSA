// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        if(digits[digits.size()-1]==10){
            digits[digits.size()-1]=0;
            for(int i=digits.size()-2;i>=0;i--){
                if(digits[i]==9) digits[i]=0;
                else {
                    digits[i]+=1;
                    break;
                }
            }
            if(digits[0]==0) digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
