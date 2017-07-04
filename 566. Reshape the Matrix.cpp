class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int origin_r = nums.size();
        int origin_c = nums[0].size();
        int n = origin_c * origin_r;
        if (n == r*c) {
            vector<vector<int>> newMaxtrix(r, vector<int>(c, 0));
            int i;
            for (i = 0; i < n; i++)
                newMaxtrix[i / c][i % c] = nums[i / origin_c][i % origin_c];
            return newMaxtrix;
        }
        else
            return nums;
    }
};
