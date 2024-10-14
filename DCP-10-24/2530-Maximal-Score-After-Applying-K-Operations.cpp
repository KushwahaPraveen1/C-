#include <vector>
#include <queue>
#include <cmath>

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;
        for (int i = 0; i < k; i++) {
            int largest = maxHeap.top(); 
            score += largest;       
            maxHeap.pop(); 
            int newValue = ceil(static_cast<double>(largest) / 3);
            maxHeap.push(newValue);
        }

        return score;
    }
};
