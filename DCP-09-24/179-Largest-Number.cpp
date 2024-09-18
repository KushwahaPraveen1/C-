class Solution {
public:
    static bool compare(string& x, string& y){
        return x+y>y+x;
    }
    static string largestNumber(vector<int>& nums){
        int n=nums.size();
        vector<string>vec(n);
        for(int i=0;i<n;i++)
        vec[i]=to_string(nums[i]);
        sort(vec.begin(),vec.end(),compare);
        string ans=accumulate(vec.begin(),vec.end(),string());
        if(ans[0]=='0')return "0";
        return ans;
    }
};