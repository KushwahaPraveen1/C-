class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        vector<int>ans;
        for(int i=0;i<timePoints.size();i++)
        {
           int total = ((timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0')) * 60 + ((timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0'));
cout<<total<<' ';
           ans.push_back(total);
        }
        sort(ans.begin(),ans.end());
        int mini=INT_MAX;
        for(int i=0;i<ans.size()-1;i++)
        {
mini=min(mini,ans[i+1]-ans[i]);
        }cout<<mini;
        mini=min(mini,1440-(ans[ans.size()-1]-ans[0]));
        mini=min(mini,1440-mini);

        return mini;
    }
};