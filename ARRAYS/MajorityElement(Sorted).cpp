#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        sort(nums.begin(), nums.end());
        
        int freq = 1;
        for (int i = 0; i < n - 1; i++) { // i < n - 1 out-of-bounds se bachata hai
            if (nums[i] == nums[i + 1]) {
                freq++;
            } else {
                freq = 1; // Frequency reset for new number
            }
            
            if (freq > n / 2) {
                return nums[i];
            }
        }
        
        return nums[0];
    }
};
