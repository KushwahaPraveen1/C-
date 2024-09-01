class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> res = {{}};
        for (int num : original){
            res.back().push_back(num);
            if (res.back().size() == n && res.size() < m)
                res.push_back({});
        }
        return res;
    }
};