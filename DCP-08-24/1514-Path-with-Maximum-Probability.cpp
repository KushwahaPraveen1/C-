class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<double> d(n, 0.0);
        d[start_node] = 1.0;
        for (int i= 0; i < n - 1; i++) {
            bool ans= false;
            for (int j= 0; j < edges.size(); j++) {
                int u= edges[j][0];
                int v= edges[j][1];
                double prob = succProb[j];
             
                if (d[u] * prob > d[v]) {
                    d[v] = d[u] * prob;
                    ans = true;
                }
                if (d[v] * prob > d[u]) {
                    d[u] = d[v] * prob;
                    ans = true;
                }
            }
            if (!ans) break;
        }
        
        return d[end_node];  
    }
};