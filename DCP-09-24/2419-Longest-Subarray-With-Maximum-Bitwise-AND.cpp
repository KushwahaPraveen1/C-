class Solution {
public:
    int longestSubarray(vector<int>& nums) {
//         int n=nums.size(),maxi=INT_MIN,ans=0,i,j;
//         vector<int>prefix(n);
//         prefix[0]=nums[0];
//         for(int i=1;i<n;i++)
//         prefix[i]=prefix[i-1]&nums[i];
//         for(i=0;i<n;i++)
//         {int temp=0;
//             for(j=i;j<n;j++)
//             {
// temp=prefix[j]&prefix[i];
// if(temp>=maxi){ans=j-i+1;maxi=temp;}
//             }
//             if(temp>=maxi){ans=j-i+1;maxi=temp;}
            
//         }
//         return ans;

int maxi=*max_element(nums.begin(),nums.end());
int len=1,maxii=1;
for(int i=0;i<nums.size()-1;i++)
{
    if(nums[i]==maxi&&nums[i+1]==maxi)
   { len++;}
    else {maxii=max(maxii,len); len=1;}
}
maxii=max(maxii,len);
return maxii;
    }
};