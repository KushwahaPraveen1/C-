class Solution {
public: 

int binaryto(int num)
{string s="";
while(num>0)
{
    s+=to_string(num%2);
    num/=2;
}
reverse(s.begin(),s.end());int cnt=0;
for(auto ch:s)
{
    if(ch=='1')cnt++;
}
    return cnt;
}

    int minBitFlips(int start, int goal) {
        int test=start^goal; 
        return binaryto(test);
    }
};