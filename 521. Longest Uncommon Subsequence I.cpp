class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) return -1;
        else {
            int m = a.size(), n = b.size();  
            return max(m, n);  
        }
        
    }
};
