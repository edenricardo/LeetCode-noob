class Solution {
public:
    string reverseWords(string s) {
        int begin = 0, end = 0;
        string res = "";
        while(end < s.length()){
            while(end != s.length()-1 && s[end] != ' '){
                end++;
            }
            if (end != s.length()-1)
                res += reverse(s.substr(begin, end-begin)) + " ";
            else
                res += reverse(s.substr(begin, end-begin+1));
            end++;
            begin = end;
        }
        return res;
    }  
    string reverse(string str) {  
        string result = "";  
        int len = str.length(), i;  
        for (i = 0; i < len; i++)   
            result = str[i] + result;  
        return result;  
    }  
};
