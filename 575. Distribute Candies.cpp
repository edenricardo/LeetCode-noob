class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int, int> HASH;
        int res = 0;
        for (int c: candies){
           HASH[c]++;
           if (HASH[c] == 1) res++;
           if (res == candies.size()/2) break;
        }
        return res;
    }
};
