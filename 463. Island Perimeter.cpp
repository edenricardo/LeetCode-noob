class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.size() == 0) return 0;  
        int cnt = 0, repeat = 0, i, j;
        for (i = 0; i < grid.size(); i++) {  
            for (j = 0; j < grid[0].size(); j++) {  
                if (!grid[i][j]) continue;  
                cnt++;  
                if (i!=0 && grid[i-1][j]) repeat++;  
                if (j!=0 && grid[i][j-1]) repeat++;  
            }  
        }  
        return cnt*4 - repeat*2;  
    }
};
