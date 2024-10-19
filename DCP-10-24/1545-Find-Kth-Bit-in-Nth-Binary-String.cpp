class Solution {
public:

string reverse(string s)
{
    int i=0,j=s.length()-1;
    while(i<j)
    {swap(s[i],s[j]);i++;j--;}
    return s;
}
string invert(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')s[i]='1';else s[i]='0';
    }
    return s;
}
    char findKthBit(int n, int k) {
        vector<string>v(n);
        v[0]="0";
        for(int i=1;i<n;i++)
        {
v[i]=v[i-1]+"1"+reverse(invert(v[i-1]));

        }
        cout<< v[n-1];
        return v[n-1][k-1];
    }
};