#include<bits/stdc++.h>
class Solution {
public:
    int getLucky(string s, int k) {
        string s2="";
       int num;
        for(auto it:s)
        {
            s2+=to_string(it-'a'+1);
        }
        
        int temp=0;string ff=s2;
        for(int i=0;i<k;i++)
        {temp=0;
               for(auto it:ff)
               {
                temp+=it-'0';
               }

               ff=to_string(temp);
        }
        return temp;
    }
};