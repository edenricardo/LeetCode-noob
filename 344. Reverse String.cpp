class Solution {
public:
    string reverseString(string s) {
        string result;  
        int len = s.size();  
        if (len==0) return result;  
        int i = 0, j = len-1;  
        while (i < len) {  
            result += s[j];  
            i++;  
            j--;  
        }  
        return result;  
    }
};
