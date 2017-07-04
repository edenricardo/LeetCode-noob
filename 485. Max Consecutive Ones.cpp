class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, max=0;
        for (int i : nums) {
            if (i) ++count;
            else {
                if (count > max) max = count;
                count = 0;
            }
        }
        if (count > max) max = count;
        return max;
    }
};
