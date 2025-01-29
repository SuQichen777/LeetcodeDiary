#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(size_t i = 0; i < nums.size(); i++){
            for(size_t j = i+1; j < min(i + k + 1,nums.size()); j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
        
    }
};