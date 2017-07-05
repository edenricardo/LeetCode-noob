class Solution {
public:
    int dir[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
    int m, n;
    
    bool ok(int x,int y){
        if (x>=0 && x<m && y>=0 && y<n) return 1;
        return 0;
    }
    
    void dfs(vector<vector<char>>&b, int x, int y){
        if (b[x][y]=='M') {
            b[x][y]='X'; 
            return;
        }
        else if (b[x][y]=='E'){
            int cnt=0, i;
            for (i=0; i<8; i++) {
                int xx=x+dir[i][0], yy=y+dir[i][1];
                if (ok(xx,yy) && b[xx][yy]=='M') cnt++;
            }
            if (cnt) {
                b[x][y]='0'+cnt;
                return;
            }
            else {
                b[x][y]='B';
                for(i=0; i<8; i++){
                    int xx=x+dir[i][0], yy=y+dir[i][1];
                    if (ok(xx,yy)) dfs(b,xx,yy);
                }
            }
        }
    }
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        m = board.size();
        n = board[0].size();
        int x=click[0], y=click[1];
        dfs(board, x, y);
        return board;
    }
};
