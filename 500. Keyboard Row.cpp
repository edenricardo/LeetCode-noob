class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> set1 = {'Q','q','W','w','E','e','R','r','T','t','Y','y','U','u','I','i','O','o','P','p'};  
        unordered_set<char> set2 = {'A','a','S','s','D','d','F','f','G','g','H','h','J','j','K','k','L','l'};  
        unordered_set<char> set3 = {'Z','z','X','x','C','c','V','v','B','b','N','n','M','m'};  
        vector<unordered_set<char>> sets = {set1, set2, set3};  
        vector<string> result;  
        int i;
        for (i = 0; i<words.size(); ++i) {  
            int index = 0;  
              
            if (set1.find(words[i][0]) != set1.end()) {  
                index = 0;  
            } 
            else if (set2.find(words[i][0]) != set2.end()) {  
                index = 1;  
            } 
            else {  
                index = 2;  
            }  
            unordered_set<char> tmpSet = sets[index];  
            int flag = 0;  
            for (char c : words[i]) {  
                if(tmpSet.find(c) != tmpSet.end()) continue;  
                else {  
                    flag = 1;  
                    break;  
                }  
            }  
              
            if (!flag) {  
                result.push_back(words[i]);  
            }  
        }  
        return result;      
    }
};
