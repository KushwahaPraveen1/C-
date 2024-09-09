class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        string ans;
        stack<string>st;
        int a=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')continue;
            else
            {a=i;
                while(a<s.length()&&s[a]!=' ')
                {
                    a++;
                }
st.push(s.substr(i,a-i));
            }
            i=a;
        }
        while(!st.empty())
        {
            string temp=st.top();
            ans+=temp+" ";
            st.pop();
        }
return ans.substr(0,ans.length()-1);    }
};