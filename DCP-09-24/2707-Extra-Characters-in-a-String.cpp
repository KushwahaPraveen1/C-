#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& d){
        unordered_set<string>dict(d.begin(),d.end());
        int n=s.size();
        vector<int>dp(n+1,0);
        for (int i=1;i<=n;i++) {
        dp[i]=dp[i-1]+1; 
        for (int j=0;j<i;j++) {
        string substring=s.substr(j,i-j);
        if (dict.count(substring))dp[i]=min(dp[i],dp[j]);}}
        return dp[n];
    }
};
