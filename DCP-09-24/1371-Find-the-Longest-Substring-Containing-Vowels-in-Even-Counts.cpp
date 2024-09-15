class Solution {
public:
    int findTheLongestSubstring(string s) {
    map<char,int>mp;
    set<char>st={'a','e','i','o','u'};
    vector<pair<char,int>>vec;
    for(auto it:s)
    {
        mp[it]++;
    }
    for(auto it:mp)

   { if(st.find(it.first)!=st.end())
   vec.push_back(make_pair(it.first,it.second));
}
bool flag=true;
for(auto it:vec)
  {
    if(it.second%2!=0)
    {
flag=false;
    }
  }
if(vec.size()==0||flag)return s.length();
else
{
    unordered_map<int,int>first;
    int mask=0;
    int ans=0;

    unordered_map<char,int>vtb={
        {'a',0},
        {'e',1},
        {'i',2},
        {'o',3},
        {'u',4}
    };

first[0]=-1;

    for (int i=0;i<s.length();++i) {
        char ch=s[i];
        if (vtb.find(ch)!=vtb.end()){
            int temp=vtb[ch];
            mask^=(1<<temp);
        }

        if(first.find(mask)!=first.end()) {
            int length=i-first[mask];
            ans=max(ans,length);
        } else first[mask]=i;
        
    }
    
    return ans;
   

}
   }
};