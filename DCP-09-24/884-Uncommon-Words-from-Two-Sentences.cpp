class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
vector<string>vec1,vec2,ans;
string temp="";
for(auto it:s1)
{
if(it!=' ')
temp+=it;
else
{vec1.push_back(temp);
temp="";
}}
vec1.push_back(temp);temp="";
for(auto it:s2)
{
if(it!=' ')temp+=it;
else
{
vec2.push_back(temp);
temp="";
}
}
vec2.push_back(temp);temp="";
map<string,int>mp;
for(int i=0;i<vec1.size();i++)
mp[vec1[i]]++; 
for(int i=0;i<vec2.size();i++)
mp[vec2[i]]++; 
for(auto it:mp)
if(it.second==1)ans.push_back(it.first);
return ans;
    }
};