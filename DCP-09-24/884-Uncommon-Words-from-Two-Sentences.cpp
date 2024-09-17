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
{
    vec1.push_back(temp);
    temp="";
}
        }
        vec1.push_back(temp);temp="";
         for(auto it:s2)
        {
if(it!=' ')temp+=it;
else
{
    vec2.push_back(temp);
    temp="";
}
        }vec2.push_back(temp);temp="";

// sort(vec1.begin(),vec1.end());
// sort(vec2.begin(),vec2.end());

// for(auto it:vec1)cout<<it<<" ";cout<<endl;
// for(auto it:vec2)cout<<it<<" ";

map<string,int>mp;
for(int i=0;i<vec1.size();i++)
{
    mp[vec1[i]]++;
}
for(int i=0;i<vec2.size();i++)
{
    mp[vec2[i]]++;
}
for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;
    if(it.second==1)ans.push_back(it.first);
}



// vector<string>common;
// unordered_set<string> st(vec1.begin(), vec1.end());
// for(const auto& it:vec2)
// {
//     if(!(st.find(it)!=st.end()))
//    { common.push_back(it);st.erase(it);}

 
// }  for(auto it:st)
//    common.push_back(it); for (const auto& str : common) {
//     cout << str <<" ";
//     }
    return ans;
    }
};