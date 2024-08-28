static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
class Solution {
private:
    void dfsGrid2(int i,int j,vector<vector<int>>& grid2,vector<vector<int>> &vis1,vector<pair<int,int>> &vec1){
        if(i<0 || j<0 || i>=grid2.size() || j>=grid2[0].size() || grid2[i][j]==0 || vis1[i][j]==1) return;
        vis1[i][j]=1;
        vec1.push_back({i,j});
        dfsGrid2(i+1,j,grid2,vis1,vec1);
        dfsGrid2(i-1,j,grid2,vis1,vec1);
        dfsGrid2(i,j+1,grid2,vis1,vec1);
        dfsGrid2(i,j-1,grid2,vis1,vec1);
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        vector<pair<int,int>> vec1;
        int n=grid1.size(),m=grid1[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        vector<vector<int>> vis1(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis1[i][j] && grid2[i][j]==1){
                    dfsGrid2(i,j,grid2,vis1,vec1);
                    bool b=true;
                    for(auto it:vec1){
                        if(grid1[it.first][it.second]!=1) {
                            b=false;
                            break;
                        }
                    }
                    vec1.clear();
                    if(b) ans++;
                }
            }
        }
        return ans;
    }
};