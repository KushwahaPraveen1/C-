class Solution {
public:
    int countKConstraintSubstrings(string s, int k)
    {
        long long i =0,j=0,n= s.size();
        long long ans =0;
        long long zeroesK = 0 ,onesK =0;
        while(j<n){
            if(s[j]=='0')zeroesK++;
            else {onesK++;}
            while( i<j && (onesK > k && zeroesK > k) )
            {
                if(s[i]=='0')
                {
                    zeroesK--;
                }
                else{
                    onesK--;
                }
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;

    }
};