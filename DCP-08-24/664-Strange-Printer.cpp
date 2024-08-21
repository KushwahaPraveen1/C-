class Solution {
public:
vector<vector<int>>dp;
int strange(string s,int l,int r)
{
    if(l==r)return 1;
    if(l>r)return 0;
    if(dp[l][r]!=-1)return dp[l][r]; 
    int i=l;
    while(i<=r&&s[i]==s[l])i++;
    if(i==r+1)return 1;
int sol1=1+strange(s,i,r);
int sol2=INT_MAX;
for(int j=i;j<=r;j++)
{if(s[j]==s[l]){
    int temp=strange(s,i,j-1)+strange(s,j,r);
    sol2=min(sol2,temp);
}

}
return dp[l][r]=min(sol1,sol2);
}
    int strangePrinter(string s) {
        int n=s.length();
        dp.resize(n+1,vector<int>(n+1,-1));
        return strange(s,0,n-1);
    }
};