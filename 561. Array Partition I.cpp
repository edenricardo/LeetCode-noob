class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int length=nums.size();
        if (length == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int sum=0;
        int i;
        for (i=0; i<length; i+=2){
            sum += nums[i];
        }
        return sum;
    }
};
