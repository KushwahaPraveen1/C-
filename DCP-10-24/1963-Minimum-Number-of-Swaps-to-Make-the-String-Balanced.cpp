class Solution {
public:
    int minSwaps(string s) {
        int cnt = 0;
        stack<char>st;
        for(auto it : s)
        {if(st.empty())st.push(it);
        else{
            if(it==']'&&st.top()=='[')
            st.pop();
            else st.push(it);
        } 
}   cout<<st.size();     return ((st.size()/2)+1)/2;
    }
};