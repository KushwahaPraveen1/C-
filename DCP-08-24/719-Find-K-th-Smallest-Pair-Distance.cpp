class Solution {
public:
    int smallestDistancePair(vector<int>& vec, int k) {
        sort(vec.begin(),vec.end());
        int mini=0,maxi=vec[vec.size()-1]-vec[0],mid,x,i,j,n=vec.size();
        while(mini<maxi){
            mid = (maxi-mini)/2+mini;
            i=0,j=0,x=0;
            while(i<n){
                while((j<n)&&(vec[j]-vec[i]<=mid)) j++; 
                x+=(j-i-1);
                i++;
            }
            if(x>=k) maxi=mid; 
                else mini=mid+1; 
        }
        return mini;
    }
};