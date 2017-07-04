class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size(), result = 0, i;  
        for (i=0; i<length; i++) {  
            result ^= nums[i];  
        }  
        return result;  
    }
};
