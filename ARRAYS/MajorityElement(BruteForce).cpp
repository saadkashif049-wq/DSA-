#include<iostream>
#include<vector>
using namespace std;

int MajorityElemments(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int freq = 0;
        for(int j = 0; j < n; j++) {
            if(nums[i] == nums[j]) {
                freq++;
            }
        }
        
        
        if(freq > n/2) {
            return nums[i];
        }
    }
    
  
    return -1; 
}

int main () {
    vector<int> vect = {1, 2, 2, 1, 1, 1};
    cout << MajorityElemments(vect) << endl; // Output: 1
    
    return 0;
}
