class Solution {
public:
  vector<vector<vector<int>>> dp;
int solve(int person,int ind,int M,int size,vector<int>vec){
if(ind>=size)return 0; if (dp[person][ind][M] != -1) return dp[person][ind][M];
int score=0;
int result;
if(person)result=-1;
else result=INT_MAX;
for(int i=1;i<=min(2*M,size-ind);i++)
{score+=vec[ind+i-1];
    if(person)
    {
        result=max(result,score+solve(0,ind+i,max(M,i),size,vec));
    }
    else{
         result=min(result,solve(1,ind+i,max(M,i),size,vec));
    }
}
return dp[person][ind][M]=result;
}
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
dp = vector<vector<vector<int>>>(2, vector<vector<int>>(n, vector<int>(n + 1, -1)));
               return solve(1,0,1,n,piles);
    }
};