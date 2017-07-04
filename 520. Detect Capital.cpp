class Solution {
public:
    bool detectCapitalUse(string word) {
        int length = word.size(), i;
        if (length == 1) return true;
        if (islower(word[0]) || (isupper(word[0]) && islower(word[1]))) {
            for (i = 1; i < word.length(); i++)
                if (isupper(word[i])) return false;
        } 
        else {
            for (i = 1; i < word.length(); i++)
                if (islower(word[i])) return false;
        }
        return true;
    }
};
