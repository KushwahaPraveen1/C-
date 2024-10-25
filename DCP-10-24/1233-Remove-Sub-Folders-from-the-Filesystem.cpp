class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string>ans;
        int i=0;
        int n=folder.size();

        while(i<n){
            ans.push_back(folder[i++]);
            for(; i<n;i++) {if(folder[i].find(ans.back()+"/") == 0) continue;
                break;}
        }
        return ans;
    }
};