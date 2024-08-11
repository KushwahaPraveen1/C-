class Solution {
public:
    int n, m;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    
    bool isvalid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        visited[i][j] = true;
        for (auto dir : directions) {
            int i_ = i + dir[0];
            int j_ = j + dir[1];
            if (isvalid(i_, j_) && !visited[i_][j_] && grid[i_][j_] == 1) {
                dfs(grid, visited, i_, j_);
            }
        }
    }
    
    int countIslands(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int island = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    dfs(grid, visited, i, j);
                    island++;
                }
            }
        }
        return island;
    }

    int minDays(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        
         int island = countIslands(grid);
        if (island != 1) return 0; 
         for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    int newIslands = countIslands(grid);
                    grid[i][j] = 1;
                    
                    if (newIslands > 1 || newIslands == 0) return 1; 
                }
            
        
        
        return 2;
    }
};