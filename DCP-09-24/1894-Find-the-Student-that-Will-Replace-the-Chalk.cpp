class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // int temp=0;
        // while(k>0)
        // {
        //     k=k-chalk[temp%chalk.size()];
        //     if(k>=0)
        //     temp++;
        // }
        // return temp%chalk.size();
        long long sum=0;
        for(auto it:chalk)
        {
            sum+=it;
        }
        long long temp=k/sum;
        k=k-(sum*temp);cout<<k;
        long long i=0;
           while(k>0)
        {
            k=k-chalk[i];
            if(k>=0)
            i++;
        }return i;

    }
};