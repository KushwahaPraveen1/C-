class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(auto it:commands)
        {
            if(it=="RIGHT")j++;
            if(it=="LEFT")j--;
            if(it=="UP")i--;
            if(it=="DOWN")i++;
        }
     return ((i*n)+j);   
    }
};