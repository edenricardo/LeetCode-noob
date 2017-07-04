class Solution {
public:
    char findTheDifference(string s, string t) {
        int ret = 0, i;
        for (i = 0; i < t.length(); i++) {
            ret += (int)t[i];
        }
        for (i = 0; i < s.length(); i++) {
            ret -= (int)s[i];
        }
        return (char)ret;
    }
};
