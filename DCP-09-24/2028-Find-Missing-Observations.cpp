#include<bits/stdc++.h>
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n)
    {
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int temp=mean*(rolls.size()+n)-sum;
        vector<int>ans;
        vector<int>ss; 
        if(temp<=0)return ans;
        if(n*6<temp)
        return ans;
        else{
         int x=temp/n;
         
              for(int i=0;i<n;i++)
              {ans.push_back(x);
              }int rem=temp-(x*n);
              for(int i=0;i<rem;i++)
               ans[i]=ans[i]+1; 

               for(int i=0;i<ans.size();i++)if(ans[i]==0)return ss;
          return ans;  
        }

    }
};