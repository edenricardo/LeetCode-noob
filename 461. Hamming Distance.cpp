class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0, tmp = x ^ y;
    	while (tmp) {
            ++result;
            tmp &= tmp - 1;
        } 
        return result;
    }
};
