class Solution {
public:
    void solve(vector<int> &c,int t,int ind,vector<int> &curr,vector<vector<int>> &ans) {
        if (t<0)return;
        if (t==0)
        {  ans.push_back(curr);
            return; }
        for (int j = ind; j < c.size(); j++) {
            if(j>ind&&c[j]==c[j-1])continue; 
            if(c[j]>t)break; 
            curr.push_back(c[j]);
            solve(c,t-c[j],j+1,curr,ans);
            curr.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& c,int t)
    {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>curr;
        solve(c,t,0,curr,ans);
        return ans;
    }
};