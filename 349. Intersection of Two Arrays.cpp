class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> hash;  
        vector<int> result;  
        for (auto val: nums1) hash[val] = true;  
        for (auto val: nums2)   
            if (hash.count(val)) {  
                result.push_back(val);  
                hash.erase(val);  
            }  
        return result;  
    }
};
