class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) { 
        int row = points.size();
        int cols = points[0].size();
        vector<long long> previousrow(cols);
        for(int i=0;i<cols;i++){
            previousrow[i] = points[0][i];
        } 
       for(int r = 1;r<row;r++){
        vector<long long> currrow(cols);
          long long leftmax = previousrow[0];
                 for(int c=0;c<cols;c++){
                   leftmax = max(leftmax-1,previousrow[c]);
                   currrow[c]  = leftmax + points[r][c];
                }

        long long rightmax = previousrow[cols-1];
        for(int c = cols-1;c>=0;c--){
            rightmax = max(rightmax-1,previousrow[c]);
            currrow[c] = max(currrow[c],rightmax+points[r][c]);
        }
        previousrow = currrow;
       } 
       long long ans = 0;
        for(int c=0;c<cols;c++){
            ans = max(ans,previousrow[c]);
        }
        return ans;
    }
};