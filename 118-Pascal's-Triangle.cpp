class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp1;

        for(int i=0;i<numRows;i++)
        { 
            vector<int>temp2(i+1,1);
for(int j=1;j<i;j++)
{
    temp2[j]=temp1[j-1]+temp1[j];
}
temp1=temp2;
ans.push_back(temp2);

        }
        return ans;
    }
};