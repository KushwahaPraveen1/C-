class Solution {
public:
    int maximumSwap(int num) {
        vector<int>v;
        while(num>0)
        {
            v.push_back(num%10);
            num/=10;
        }reverse(v.begin(), v.end());
for(int i=0;i<v.size();i++)
{
     auto maxIt = max_element(v.begin() + i, v.end());
     auto it = find(v.rbegin(), v.rend(), *maxIt);
      int index = distance(v.begin(), it.base()) - 1;
        cout<<*maxIt<<\  \;
         if (v[i] != *maxIt) {
            swap(v[i], v[index]);
            break; 
        }
}for(int i=0;i<v.size();i++)
{
   cout<<v[i]<<endl;
}int result = 0;
        for (int digit : v) {
            result = result * 10 + digit;
        }

        return result;
 
    }
};