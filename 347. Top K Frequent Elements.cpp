class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;  
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;  
        vector<int> ret;  
        for (int num:nums)   
            hash[num]++;  
          
        for (auto it:hash) {  
            heap.push(make_pair(it.second, it.first));  
            if(heap.size() > k) heap.pop();  
        }  
          
        while (!heap.empty()) {  
            ret.push_back(heap.top().second);  
            reverse(ret.begin(), ret.end());
            heap.pop();  
        }  
          
        return ret;  
    }
};
