#include <iostream>
#include <vector> 
using namespace std;

// Pass vector by reference to avoid unnecessary memory copy
vector<int> pairsum(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    vector<int> ans;

    while (left < right) {
        int pairsum = nums[left] + nums[right];

        if (pairsum < target) {
            left++;
        }
        else if (pairsum > target) {
            right--;
        }
        else { 
            ans.push_back(left);
            ans.push_back(right);
            return ans;
        }
    }
    
    return {}; // Return empty vector if no pair sums up to target
}

int main() {
    int target = 9;
    vector<int> num = {2, 7, 11, 13};
  
    vector<int> ans = pairsum(num, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
