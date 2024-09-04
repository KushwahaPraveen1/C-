class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x=0,y=0,maxi=0;
        unordered_set<string>st;
        for(vector<int>it:obstacles)
        {
            string temp=to_string(it[0])+"_"+to_string(it[1]);
            st.insert(temp);
        }
        pair<int,int>dir={0,1};
        for(auto it2:commands)
        {
if(it2==-2)
{
dir={-dir.second,dir.first};
}
if(it2==-1)
{dir={dir.second,-dir.first};

}
else
{
    for(int i=0;i<it2;i++)
{int newx=x+dir.first;
int newy=y+dir.second;
string temp=to_string(newx)+"_"+to_string(newy);
if(st.find(temp)!=st.end())break;

x=newx;
y=newy;
}
maxi=max(maxi,(x*x+y*y));
}}
return maxi;
        }
};