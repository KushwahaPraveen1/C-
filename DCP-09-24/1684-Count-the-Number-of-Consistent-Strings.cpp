class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st;int cnt=0;
        for(char it:allowed)st.insert(it);
bool flag=false;
        for(int i=0;i<words.size();i++)
        {flag=false;
            for(auto it : words[i])
            {
                if(!(st.find(it)!=st.end()))
                flag=true;

            }
            if(!flag)cnt++;
        }return cnt;
    }
};