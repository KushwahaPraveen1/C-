#include <iostream>
#include <string>
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>temp;
        for(int i=1;i<=n;i++) 
        temp.push_back(to_string(i)); 
        sort(temp.begin(),temp.end());
        vector<int>ans;
        for(auto it:temp)
        ans.push_back(stoi(it));
        return ans;
    }
};